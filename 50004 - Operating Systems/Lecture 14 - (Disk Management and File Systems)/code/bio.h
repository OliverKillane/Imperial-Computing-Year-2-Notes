/* main unit of I/O for the block layer and lower layers (ie drivers and
 * stacking drivers)
 */
struct bio {
	struct bio          *bi_next;	/* request queue link */
	struct block_device	*bi_bdev;
	unsigned int         bi_opf;    /* bottom bits req flags, top bits REQ_OP. 
                                     * Use accessors.
                                     */
	unsigned short       bi_flags;	/* BIO_* below */
	unsigned short       bi_ioprio;
	unsigned short       bi_write_hint;
	blk_status_t         bi_status;
	atomic_t             __bi_remaining;
	struct bvec_iter     bi_iter;
	bio_end_io_t        *bi_end_io;
	void                *bi_private;
#ifdef CONFIG_BLK_CGROUP

	/* Represents the association of the css and request_queue for the bio.
	 * If a bio goes direct to device, it will not have a blkg as it will
	 * not have a request_queue associated with it.  The reference is put
	 * on release of the bio.
	 */
	struct blkcg_gq		*bi_blkg;
	struct bio_issue	bi_issue;
#ifdef CONFIG_BLK_CGROUP_IOCOST
	u64			bi_iocost_cost;
#endif
#endif

#ifdef CONFIG_BLK_INLINE_ENCRYPTION
	struct bio_crypt_ctx	*bi_crypt_context;
#endif

	union {
#if defined(CONFIG_BLK_DEV_INTEGRITY)
		struct bio_integrity_payload *bi_integrity; /* data integrity */
#endif
	};

	unsigned short bi_vcnt;	/* how many bio_vec's */

	/* Everything starting with bi_max_vecs will be preserved by bio_reset()
	 */
	unsigned short  bi_max_vecs;	/* max bvl_vecs we can hold */
    atomic_t        __bi_cnt;	/* pin count */
	struct bio_vec *bi_io_vec;	/* the actual vec list */
	struct bio_set *bi_pool;

	/* We can inline a number of vecs at the end of the bio, to avoid
	 * double allocations for a small number of bio_vecs. This member
	 * MUST obviously be kept at the very end of the bio.
	 */
	struct bio_vec		bi_inline_vecs[];
};