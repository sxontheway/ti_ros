// Generated by gencpp from file mds_cnn_node_pkg/MDSPred.msg
// DO NOT EDIT!


#ifndef MDS_CNN_NODE_PKG_MESSAGE_MDSPRED_H
#define MDS_CNN_NODE_PKG_MESSAGE_MDSPRED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace mds_cnn_node_pkg
{
template <class ContainerAllocator>
struct MDSPred_
{
  typedef MDSPred_<ContainerAllocator> Type;

  MDSPred_()
    : header()
    , target_idx(0)
    , posX(0.0)
    , posY(0.0)
    , velX(0.0)
    , velY(0.0)
    , mds_pred_array()
    , prediction()  {
    }
  MDSPred_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , target_idx(0)
    , posX(0.0)
    , posY(0.0)
    , velX(0.0)
    , velY(0.0)
    , mds_pred_array(_alloc)
    , prediction(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _target_idx_type;
  _target_idx_type target_idx;

   typedef float _posX_type;
  _posX_type posX;

   typedef float _posY_type;
  _posY_type posY;

   typedef float _velX_type;
  _velX_type velX;

   typedef float _velY_type;
  _velY_type velY;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _mds_pred_array_type;
  _mds_pred_array_type mds_pred_array;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _prediction_type;
  _prediction_type prediction;





  typedef boost::shared_ptr< ::mds_cnn_node_pkg::MDSPred_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mds_cnn_node_pkg::MDSPred_<ContainerAllocator> const> ConstPtr;

}; // struct MDSPred_

typedef ::mds_cnn_node_pkg::MDSPred_<std::allocator<void> > MDSPred;

typedef boost::shared_ptr< ::mds_cnn_node_pkg::MDSPred > MDSPredPtr;
typedef boost::shared_ptr< ::mds_cnn_node_pkg::MDSPred const> MDSPredConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mds_cnn_node_pkg::MDSPred_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mds_cnn_node_pkg::MDSPred_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mds_cnn_node_pkg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'mds_cnn_node_pkg': ['/mnt/c/Users/ryzhang/Downloads/ti_ros/src/ti-mmwave-mds-cnn/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mds_cnn_node_pkg::MDSPred_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mds_cnn_node_pkg::MDSPred_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mds_cnn_node_pkg::MDSPred_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mds_cnn_node_pkg::MDSPred_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mds_cnn_node_pkg::MDSPred_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mds_cnn_node_pkg::MDSPred_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mds_cnn_node_pkg::MDSPred_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1f0f31d758f114011921fb9c0d76aee9";
  }

  static const char* value(const ::mds_cnn_node_pkg::MDSPred_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1f0f31d758f11401ULL;
  static const uint64_t static_value2 = 0x1921fb9c0d76aee9ULL;
};

template<class ContainerAllocator>
struct DataType< ::mds_cnn_node_pkg::MDSPred_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mds_cnn_node_pkg/MDSPred";
  }

  static const char* value(const ::mds_cnn_node_pkg::MDSPred_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mds_cnn_node_pkg::MDSPred_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
uint8 target_idx\n\
float32 posX\n\
float32 posY\n\
float32 velX\n\
float32 velY\n\
float32[] mds_pred_array\n\
string prediction\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::mds_cnn_node_pkg::MDSPred_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mds_cnn_node_pkg::MDSPred_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.target_idx);
      stream.next(m.posX);
      stream.next(m.posY);
      stream.next(m.velX);
      stream.next(m.velY);
      stream.next(m.mds_pred_array);
      stream.next(m.prediction);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MDSPred_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mds_cnn_node_pkg::MDSPred_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mds_cnn_node_pkg::MDSPred_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "target_idx: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.target_idx);
    s << indent << "posX: ";
    Printer<float>::stream(s, indent + "  ", v.posX);
    s << indent << "posY: ";
    Printer<float>::stream(s, indent + "  ", v.posY);
    s << indent << "velX: ";
    Printer<float>::stream(s, indent + "  ", v.velX);
    s << indent << "velY: ";
    Printer<float>::stream(s, indent + "  ", v.velY);
    s << indent << "mds_pred_array[]" << std::endl;
    for (size_t i = 0; i < v.mds_pred_array.size(); ++i)
    {
      s << indent << "  mds_pred_array[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.mds_pred_array[i]);
    }
    s << indent << "prediction: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.prediction);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MDS_CNN_NODE_PKG_MESSAGE_MDSPRED_H
