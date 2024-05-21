import tensorflow as tf

#Random Tensorok
shape=[32,10,100,3]
x1 = tf.random.uniform(shape,minval=-5,maxval=5,dtype=tf.double)
x2 = tf.random.uniform(shape,minval=-5,maxval=5,dtype=tf.double)

# Adjunk a tenzoroknak egy ujabb dimenziot a konnyebb szamolasert
x1_expanded = tf.expand_dims(x1, axis=-2)
x2_expanded = tf.expand_dims(x2, axis=-3)

# Vegso Tensor
DistanceTensor = tf.norm(x1_expanded - x2_expanded, axis=-1)

# I used ChatGPT
