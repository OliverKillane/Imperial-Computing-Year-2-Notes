public class Map extends Mapper<LongWritable, Text, Text, IntWritable> {
    private final static IntWritable one = new IntWritable(1);
    private Text word = new Text();
       
    public void map(LongWritable key, Text value, Context context)  
    throws IOException, InterruptedException {
      
      String line = value.toString();
      StringTokenizer tokenizer = new StringTokenizer(line);
      while (tokenizer.hasMoreTokens()) {
         word.set(tokenizer.nextToken());
         context.write(word, one);
      }
   }
}


public class Reduce extends Reducer<Text, IntWritable, Text, IntWritable> {
 
    public void reduce(Text key, Iterable<IntWritable> values, Context context) 
                                      throws IOException, InterruptedException {
      
        int sum = 0;
        for (IntWritable val : values) {
            sum += val.get();
        }
        context.write(key, new IntWritable(sum));
    }
}


public class WordCount {
    public static void main(String[] args) throws Exception {
       Configuration conf = new Configuration();
           
       Job job = new Job(conf, "wordcount");
       
       job.setOutputKeyClass(Text.class);
       job.setOutputValueClass(IntWritable.class);
           
       job.setMapperClass(Map.class);
       job.setReducerClass(Reduce.class);
           
       job.setInputFormatClass(TextInputFormat.class);
       job.setOutputFormatClass(TextOutputFormat.class);
           
       FileInputFormat.addInputPath(job, new Path("some path");
       FileOutputFormat.setOutputPath(job, new Path("some path");
           
       job.waitForCompletion(true);
     }
  }