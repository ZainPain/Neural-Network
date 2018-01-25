import tensorflow as tf

if __name__ == '__main__':
    a = tf.constant([7.0,2.0])
    b = tf.constant(6.0)
    num = tf.constant([1.0,2.0,3.0,4.0,5.0,6.0,5.0,4.0,3.0,8.0,2.0])
    n = tf.argmax(num)
    c = a*a
    d = a - 10*b
    sess = 	tf.Session()
	#File_writer = tf.summary.FileWriter('~/practicetf/graph',sess.graph)
	# to view graph in web, type commands in terminal:
	#tensorboard --logdir="TensorFlow"
    e = a[0] * a[1]
    test = e - num[n]
    z = tf.constant([[1.0,2.0,3.0],[4.0,5.0,6.0]])
    result = tf.reduce_sum(z,1)
    print(sess.run(c))
    print(sess.run(d))
    print(sess.run(e))
    print(sess.run(test))
    print(sess.run(tf.shape(num)))
    print(12-sess.run(tf.shape(num)))
    print(sess.run(tf.reduce_sum(z,1)))
    print(sess.run(result[0]))
    sess.close()
    #a = tf.placeholder(tf.float32)
    #b = tf.placeholder(tf.float32)
    # adder_node = a + b
    # print(ses.run(adder_node, {a:[1,3],b:[2,6]}))
