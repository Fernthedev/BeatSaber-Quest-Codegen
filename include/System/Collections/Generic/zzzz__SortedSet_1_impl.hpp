#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__SortedSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__SortedSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Collections/Generic/zzzz__TreeWalkPredicate_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Collections/Generic/zzzz__NodeColor_def.hpp"
#include "System/Collections/Generic/zzzz__TreeRotation_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename T>
constexpr void System::Collections::Generic::__SortedSet_1__ElementCount<T>::__set_UniqueCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<typename T>
constexpr int32_t& System::Collections::Generic::__SortedSet_1__ElementCount<T>::__get_UniqueCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename T>
constexpr int32_t const& System::Collections::Generic::__SortedSet_1__ElementCount<T>::__get_UniqueCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename T>
constexpr void System::Collections::Generic::__SortedSet_1__ElementCount<T>::__set_UnfoundCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<typename T>
constexpr int32_t& System::Collections::Generic::__SortedSet_1__ElementCount<T>::__get_UnfoundCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename T>
constexpr int32_t const& System::Collections::Generic::__SortedSet_1__ElementCount<T>::__get_UnfoundCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "UniqueCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "UnfoundCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::System::Collections::Generic::__SortedSet_1__ElementCount<T>::__SortedSet_1__ElementCount(int32_t  UniqueCount, int32_t  UnfoundCount) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->UniqueCount = UniqueCount;
this->UnfoundCount = UnfoundCount;
}
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::*)(uint32_t, ::System::Collections::Generic::NodeColor)>(&::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::NodeColor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>.IsNonNullRed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*)>(&::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::IsNonNullRed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "IsNonNullRed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>.IsNullOrBlack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*)>(&::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::IsNullOrBlack)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "IsNullOrBlack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::get_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>.set_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::*)(uint32_t)>(&::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::set_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>.get_Left
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* (::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::get_Left)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "get_Left",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>.set_Left
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::*)(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*)>(&::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::set_Left)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "set_Left",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>.get_Right
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* (::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::get_Right)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "get_Right",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>.set_Right
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::*)(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*)>(&::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::set_Right)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "set_Right",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>.get_Color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::NodeColor (::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::get_Color)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "get_Color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>.set_Color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::*)(::System::Collections::Generic::NodeColor)>(&::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::set_Color)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "set_Color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::NodeColor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>.get_IsBlack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::get_IsBlack)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "get_IsBlack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>.get_IsRed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::get_IsRed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "get_IsRed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>.get_Is2Node
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::get_Is2Node)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "get_Is2Node",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>.get_Is4Node
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::get_Is4Node)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "get_Is4Node",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>.ColorBlack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::ColorBlack)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "ColorBlack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>.ColorRed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::ColorRed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "ColorRed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>.GetRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::TreeRotation (::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::*)(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*)>(&::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::GetRotation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "GetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>.GetSibling
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* (::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::*)(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*)>(&::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::GetSibling)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "GetSibling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>.Split4Node
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::Split4Node)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "Split4Node",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>.Rotate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* (::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::*)(::System::Collections::Generic::TreeRotation)>(&::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::Rotate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "Rotate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::TreeRotation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>.RotateLeft
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* (::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::RotateLeft)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "RotateLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>.RotateLeftRight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* (::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::RotateLeftRight)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "RotateLeftRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>.RotateRight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* (::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::RotateRight)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "RotateRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>.RotateRightLeft
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* (::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::RotateRightLeft)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "RotateRightLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>.Merge2Nodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::*)()>(&::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::Merge2Nodes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "Merge2Nodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>.ReplaceChild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::*)(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*)>(&::System::Collections::Generic::__SortedSet_1__Node<uint32_t>::ReplaceChild)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "ReplaceChild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::__SortedSet_1__Node<uint32_t>::__set__Item_k__BackingField(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this, std::forward<uint32_t>(value));
}
constexpr uint32_t& System::Collections::Generic::__SortedSet_1__Node<uint32_t>::__get__Item_k__BackingField()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this);
}
constexpr uint32_t const& System::Collections::Generic::__SortedSet_1__Node<uint32_t>::__get__Item_k__BackingField() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this);
}
constexpr void System::Collections::Generic::__SortedSet_1__Node<uint32_t>::__set__Left_k__BackingField(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, 0x18>(this, std::forward<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>(value));
}
constexpr ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* System::Collections::Generic::__SortedSet_1__Node<uint32_t>::__get__Left_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*> System::Collections::Generic::__SortedSet_1__Node<uint32_t>::__get__Left_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, 0x18>(this);
}
constexpr void System::Collections::Generic::__SortedSet_1__Node<uint32_t>::__set__Right_k__BackingField(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, 0x20>(this, std::forward<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>(value));
}
constexpr ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* System::Collections::Generic::__SortedSet_1__Node<uint32_t>::__get__Right_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*> System::Collections::Generic::__SortedSet_1__Node<uint32_t>::__get__Right_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, 0x20>(this);
}
constexpr void System::Collections::Generic::__SortedSet_1__Node<uint32_t>::__set__Color_k__BackingField(::System::Collections::Generic::NodeColor  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::NodeColor, 0x28>(this, std::forward<::System::Collections::Generic::NodeColor>(value));
}
constexpr ::System::Collections::Generic::NodeColor& System::Collections::Generic::__SortedSet_1__Node<uint32_t>::__get__Color_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::NodeColor, 0x28>(this);
}
constexpr ::System::Collections::Generic::NodeColor const& System::Collections::Generic::__SortedSet_1__Node<uint32_t>::__get__Color_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::NodeColor, 0x28>(this);
}
inline ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* System::Collections::Generic::__SortedSet_1__Node<uint32_t>::New_ctor(uint32_t  item, ::System::Collections::Generic::NodeColor  color)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>(item, color));
}
inline void System::Collections::Generic::__SortedSet_1__Node<uint32_t>::_ctor(uint32_t  item, ::System::Collections::Generic::NodeColor  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::NodeColor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item, color);
}
inline bool System::Collections::Generic::__SortedSet_1__Node<uint32_t>::IsNonNullRed(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "IsNonNullRed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, node);
}
inline bool System::Collections::Generic::__SortedSet_1__Node<uint32_t>::IsNullOrBlack(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "IsNullOrBlack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, node);
}
inline uint32_t System::Collections::Generic::__SortedSet_1__Node<uint32_t>::get_Item()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::__SortedSet_1__Node<uint32_t>::set_Item(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* System::Collections::Generic::__SortedSet_1__Node<uint32_t>::get_Left()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "get_Left",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::__SortedSet_1__Node<uint32_t>::set_Left(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "set_Left",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* System::Collections::Generic::__SortedSet_1__Node<uint32_t>::get_Right()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "get_Right",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::__SortedSet_1__Node<uint32_t>::set_Right(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "set_Right",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Collections::Generic::NodeColor System::Collections::Generic::__SortedSet_1__Node<uint32_t>::get_Color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "get_Color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::NodeColor, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::__SortedSet_1__Node<uint32_t>::set_Color(::System::Collections::Generic::NodeColor  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "set_Color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::NodeColor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool System::Collections::Generic::__SortedSet_1__Node<uint32_t>::get_IsBlack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "get_IsBlack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Collections::Generic::__SortedSet_1__Node<uint32_t>::get_IsRed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "get_IsRed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Collections::Generic::__SortedSet_1__Node<uint32_t>::get_Is2Node()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "get_Is2Node",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Collections::Generic::__SortedSet_1__Node<uint32_t>::get_Is4Node()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "get_Is4Node",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::__SortedSet_1__Node<uint32_t>::ColorBlack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "ColorBlack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::__SortedSet_1__Node<uint32_t>::ColorRed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "ColorRed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::TreeRotation System::Collections::Generic::__SortedSet_1__Node<uint32_t>::GetRotation(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  current, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  sibling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "GetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::TreeRotation, false>(*this, ___internal_method, current, sibling);
}
inline ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* System::Collections::Generic::__SortedSet_1__Node<uint32_t>::GetSibling(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "GetSibling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, false>(*this, ___internal_method, node);
}
inline void System::Collections::Generic::__SortedSet_1__Node<uint32_t>::Split4Node()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "Split4Node",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* System::Collections::Generic::__SortedSet_1__Node<uint32_t>::Rotate(::System::Collections::Generic::TreeRotation  rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "Rotate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::TreeRotation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, false>(*this, ___internal_method, rotation);
}
inline ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* System::Collections::Generic::__SortedSet_1__Node<uint32_t>::RotateLeft()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "RotateLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* System::Collections::Generic::__SortedSet_1__Node<uint32_t>::RotateLeftRight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "RotateLeftRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* System::Collections::Generic::__SortedSet_1__Node<uint32_t>::RotateRight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "RotateRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* System::Collections::Generic::__SortedSet_1__Node<uint32_t>::RotateRightLeft()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "RotateRightLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::__SortedSet_1__Node<uint32_t>::Merge2Nodes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "Merge2Nodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::__SortedSet_1__Node<uint32_t>::ReplaceChild(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  child, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  newChild)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(),
                            "ReplaceChild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, child, newChild);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Generic::__SortedSet_1__Node<T>::__set__Item_k__BackingField(T  value)  {
::cordl_internals::setInstanceField<T, 0x10>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& System::Collections::Generic::__SortedSet_1__Node<T>::__get__Item_k__BackingField()  {
return ::cordl_internals::getInstanceField<T, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& System::Collections::Generic::__SortedSet_1__Node<T>::__get__Item_k__BackingField() const {
return ::cordl_internals::getInstanceField<T, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Generic::__SortedSet_1__Node<T>::__set__Left_k__BackingField(::System::Collections::Generic::__SortedSet_1__Node<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::__SortedSet_1__Node<T>*, 0x18>(this, std::forward<::System::Collections::Generic::__SortedSet_1__Node<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::__SortedSet_1__Node<T>* System::Collections::Generic::__SortedSet_1__Node<T>::__get__Left_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__SortedSet_1__Node<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__SortedSet_1__Node<T>*> System::Collections::Generic::__SortedSet_1__Node<T>::__get__Left_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__SortedSet_1__Node<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Generic::__SortedSet_1__Node<T>::__set__Right_k__BackingField(::System::Collections::Generic::__SortedSet_1__Node<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::__SortedSet_1__Node<T>*, 0x20>(this, std::forward<::System::Collections::Generic::__SortedSet_1__Node<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::__SortedSet_1__Node<T>* System::Collections::Generic::__SortedSet_1__Node<T>::__get__Right_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__SortedSet_1__Node<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__SortedSet_1__Node<T>*> System::Collections::Generic::__SortedSet_1__Node<T>::__get__Right_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__SortedSet_1__Node<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Generic::__SortedSet_1__Node<T>::__set__Color_k__BackingField(::System::Collections::Generic::NodeColor  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::NodeColor, 0x28>(this, std::forward<::System::Collections::Generic::NodeColor>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::NodeColor& System::Collections::Generic::__SortedSet_1__Node<T>::__get__Color_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::NodeColor, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::NodeColor const& System::Collections::Generic::__SortedSet_1__Node<T>::__get__Color_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::NodeColor, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::__SortedSet_1__Node<T>* System::Collections::Generic::__SortedSet_1__Node<T>::New_ctor(T  item, ::System::Collections::Generic::NodeColor  color)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::__SortedSet_1__Node<T>*>(item, color));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::__SortedSet_1__Node<T>::_ctor(T  item, ::System::Collections::Generic::NodeColor  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::NodeColor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item, color);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Generic::__SortedSet_1__Node<T>::IsNonNullRed(::System::Collections::Generic::__SortedSet_1__Node<T>*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                            "IsNonNullRed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, node);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Generic::__SortedSet_1__Node<T>::IsNullOrBlack(::System::Collections::Generic::__SortedSet_1__Node<T>*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                            "IsNullOrBlack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, node);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T System::Collections::Generic::__SortedSet_1__Node<T>::get_Item()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::__SortedSet_1__Node<T>::set_Item(T  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::__SortedSet_1__Node<T>* System::Collections::Generic::__SortedSet_1__Node<T>::get_Left()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                            "get_Left",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Node<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::__SortedSet_1__Node<T>::set_Left(::System::Collections::Generic::__SortedSet_1__Node<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                            "set_Left",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::__SortedSet_1__Node<T>* System::Collections::Generic::__SortedSet_1__Node<T>::get_Right()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                            "get_Right",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Node<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::__SortedSet_1__Node<T>::set_Right(::System::Collections::Generic::__SortedSet_1__Node<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                            "set_Right",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::NodeColor System::Collections::Generic::__SortedSet_1__Node<T>::get_Color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                            "get_Color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::NodeColor, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::__SortedSet_1__Node<T>::set_Color(::System::Collections::Generic::NodeColor  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                            "set_Color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::NodeColor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Generic::__SortedSet_1__Node<T>::get_IsBlack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                            "get_IsBlack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Generic::__SortedSet_1__Node<T>::get_IsRed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                            "get_IsRed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Generic::__SortedSet_1__Node<T>::get_Is2Node()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                            "get_Is2Node",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Generic::__SortedSet_1__Node<T>::get_Is4Node()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                            "get_Is4Node",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::__SortedSet_1__Node<T>::ColorBlack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                            "ColorBlack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::__SortedSet_1__Node<T>::ColorRed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                            "ColorRed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::TreeRotation System::Collections::Generic::__SortedSet_1__Node<T>::GetRotation(::System::Collections::Generic::__SortedSet_1__Node<T>*  current, ::System::Collections::Generic::__SortedSet_1__Node<T>*  sibling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                            "GetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::TreeRotation, false>(*this, ___internal_method, current, sibling);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::__SortedSet_1__Node<T>* System::Collections::Generic::__SortedSet_1__Node<T>::GetSibling(::System::Collections::Generic::__SortedSet_1__Node<T>*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                            "GetSibling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Node<T>*, false>(*this, ___internal_method, node);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::__SortedSet_1__Node<T>::Split4Node()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                            "Split4Node",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::__SortedSet_1__Node<T>* System::Collections::Generic::__SortedSet_1__Node<T>::Rotate(::System::Collections::Generic::TreeRotation  rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                            "Rotate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::TreeRotation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Node<T>*, false>(*this, ___internal_method, rotation);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::__SortedSet_1__Node<T>* System::Collections::Generic::__SortedSet_1__Node<T>::RotateLeft()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                            "RotateLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Node<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::__SortedSet_1__Node<T>* System::Collections::Generic::__SortedSet_1__Node<T>::RotateLeftRight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                            "RotateLeftRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Node<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::__SortedSet_1__Node<T>* System::Collections::Generic::__SortedSet_1__Node<T>::RotateRight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                            "RotateRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Node<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::__SortedSet_1__Node<T>* System::Collections::Generic::__SortedSet_1__Node<T>::RotateRightLeft()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                            "RotateRightLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Node<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::__SortedSet_1__Node<T>::Merge2Nodes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                            "Merge2Nodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::__SortedSet_1__Node<T>::ReplaceChild(::System::Collections::Generic::__SortedSet_1__Node<T>*  child, ::System::Collections::Generic::__SortedSet_1__Node<T>*  newChild)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(),
                            "ReplaceChild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, child, newChild);
}
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::*)(::System::Collections::Generic::SortedSet_1<uint32_t>*)>(&::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::*)(::System::Collections::Generic::SortedSet_1<uint32_t>*, bool)>(&::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::*)(::System::Object*)>(&::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::*)()>(&::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::Initialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::*)()>(&::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::*)()>(&::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::*)()>(&::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::*)()>(&::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::*)()>(&::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::*)()>(&::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<uint32_t>"
constexpr  System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::operator ::System::Collections::Generic::IEnumerator_1<uint32_t>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<uint32_t>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr  System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::operator ::System::Runtime::Serialization::ISerializable*()  {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr  System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::operator ::System::Runtime::Serialization::IDeserializationCallback*()  {
return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::setStaticF_s_dummyNode(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, "s_dummyNode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>>::get>(std::forward<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>(value));
}
inline ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::getStaticF_s_dummyNode()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, "s_dummyNode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>>::get>();
}
constexpr void System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::__set__tree(::System::Collections::Generic::SortedSet_1<uint32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::SortedSet_1<uint32_t>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::SortedSet_1<uint32_t>*>(value));
}
constexpr ::System::Collections::Generic::SortedSet_1<uint32_t>* System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::__get__tree()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::SortedSet_1<uint32_t>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::SortedSet_1<uint32_t>*> System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::__get__tree() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::SortedSet_1<uint32_t>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::__set__version(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::__get__version()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::__get__version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::__set__stack(::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>*>(value));
}
constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>* System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::__get__stack()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>*> System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::__get__stack() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::__set__current(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>(value));
}
constexpr ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::__get__current()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*> System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::__get__current() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::__set__reverse(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::__get__reverse()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::__get__reverse() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::_ctor(::System::Collections::Generic::SortedSet_1<uint32_t>*  set)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, set);
}
inline void System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::_ctor(::System::Collections::Generic::SortedSet_1<uint32_t>*  set, bool  reverse)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, set, reverse);
}
inline void System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, info, context);
}
inline void System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sender);
}
inline void System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline uint32_t System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method);
}
inline ::System::Object* System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_tree", ty: "::System::Collections::Generic::SortedSet_1<uint32_t>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_stack", ty: "::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_current", ty: "::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_reverse", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>::__SortedSet_1__Enumerator(::System::Collections::Generic::SortedSet_1<uint32_t>*  _tree, int32_t  _version, ::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>*  _stack, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  _current, bool  _reverse) noexcept : ::bs_hook::ValueTypeWrapper<0x28>() {this->_tree = _tree;
this->_version = _version;
this->_stack = _stack;
this->_current = _current;
this->_reverse = _reverse;
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Generic::__SortedSet_1__Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Generic::__SortedSet_1__Enumerator<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Generic::__SortedSet_1__Enumerator<T>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Generic::__SortedSet_1__Enumerator<T>::operator ::System::Runtime::Serialization::ISerializable*()  {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Generic::__SortedSet_1__Enumerator<T>::operator ::System::Runtime::Serialization::IDeserializationCallback*()  {
return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::__SortedSet_1__Enumerator<T>::setStaticF_s_dummyNode(::System::Collections::Generic::__SortedSet_1__Node<T>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::__SortedSet_1__Node<T>*, "s_dummyNode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<T>>::get>(std::forward<::System::Collections::Generic::__SortedSet_1__Node<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::__SortedSet_1__Node<T>* System::Collections::Generic::__SortedSet_1__Enumerator<T>::getStaticF_s_dummyNode()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::__SortedSet_1__Node<T>*, "s_dummyNode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<T>>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Generic::__SortedSet_1__Enumerator<T>::__set__tree(::System::Collections::Generic::SortedSet_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::SortedSet_1<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::SortedSet_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::SortedSet_1<T>* System::Collections::Generic::__SortedSet_1__Enumerator<T>::__get__tree()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::SortedSet_1<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::SortedSet_1<T>*> System::Collections::Generic::__SortedSet_1__Enumerator<T>::__get__tree() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::SortedSet_1<T>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Generic::__SortedSet_1__Enumerator<T>::__set__version(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Collections::Generic::__SortedSet_1__Enumerator<T>::__get__version()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Collections::Generic::__SortedSet_1__Enumerator<T>::__get__version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Generic::__SortedSet_1__Enumerator<T>::__set__stack(::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<T>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<T>*>*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<T>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<T>*>* System::Collections::Generic::__SortedSet_1__Enumerator<T>::__get__stack()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<T>*>*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<T>*>*> System::Collections::Generic::__SortedSet_1__Enumerator<T>::__get__stack() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<T>*>*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Generic::__SortedSet_1__Enumerator<T>::__set__current(::System::Collections::Generic::__SortedSet_1__Node<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::__SortedSet_1__Node<T>*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::__SortedSet_1__Node<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::__SortedSet_1__Node<T>* System::Collections::Generic::__SortedSet_1__Enumerator<T>::__get__current()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__SortedSet_1__Node<T>*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__SortedSet_1__Node<T>*> System::Collections::Generic::__SortedSet_1__Enumerator<T>::__get__current() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__SortedSet_1__Node<T>*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Generic::__SortedSet_1__Enumerator<T>::__set__reverse(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool& System::Collections::Generic::__SortedSet_1__Enumerator<T>::__get__reverse()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool const& System::Collections::Generic::__SortedSet_1__Enumerator<T>::__get__reverse() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::__SortedSet_1__Enumerator<T>::_ctor(::System::Collections::Generic::SortedSet_1<T>*  set)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::SortedSet_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, set);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::__SortedSet_1__Enumerator<T>::_ctor(::System::Collections::Generic::SortedSet_1<T>*  set, bool  reverse)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::SortedSet_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, set, reverse);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::__SortedSet_1__Enumerator<T>::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<T>>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, info, context);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::__SortedSet_1__Enumerator<T>::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<T>>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sender);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::__SortedSet_1__Enumerator<T>::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<T>>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Generic::__SortedSet_1__Enumerator<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::__SortedSet_1__Enumerator<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<T>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T System::Collections::Generic::__SortedSet_1__Enumerator<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<T>>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Object* System::Collections::Generic::__SortedSet_1__Enumerator<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<T>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::__SortedSet_1__Enumerator<T>::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<T>>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::__SortedSet_1__Enumerator<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1__Enumerator<T>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_tree", ty: "::System::Collections::Generic::SortedSet_1<T>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_stack", ty: "::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<T>*>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_current", ty: "::System::Collections::Generic::__SortedSet_1__Node<T>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_reverse", ty: "bool", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::__SortedSet_1__Enumerator<T>::__SortedSet_1__Enumerator(::System::Collections::Generic::SortedSet_1<T>*  _tree, int32_t  _version, ::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<T>*>*  _stack, ::System::Collections::Generic::__SortedSet_1__Node<T>*  _current, bool  _reverse) noexcept : ::bs_hook::ValueTypeWrapper<0x28>() {this->_tree = _tree;
this->_version = _version;
this->_stack = _stack;
this->_current = _current;
this->_reverse = _reverse;
}
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<uint32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<uint32_t>::*)()>(&::System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<uint32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<uint32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<uint32_t>._CopyTo_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<uint32_t>::*)(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*)>(&::System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<uint32_t>::_CopyTo_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<uint32_t>*>::get(),
                            "<CopyTo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<uint32_t>::__set_index(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<uint32_t>::__get_index()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<uint32_t>::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<uint32_t>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<uint32_t>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<uint32_t>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<uint32_t>::__set_array(::ArrayW<uint32_t,::Array<uint32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint32_t,::Array<uint32_t>*>, 0x18>(this, std::forward<::ArrayW<uint32_t,::Array<uint32_t>*>>(value));
}
constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<uint32_t>::__get_array()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t,::Array<uint32_t>*>, 0x18>(this);
}
constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<uint32_t>::__get_array() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t,::Array<uint32_t>*>, 0x18>(this);
}
inline ::System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<uint32_t>* System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<uint32_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<uint32_t>*>());
}
inline void System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<uint32_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<uint32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<uint32_t>::_CopyTo_b__0(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<uint32_t>*>::get(),
                            "<CopyTo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, node);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>::__set_index(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>::__get_index()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>::__set_array(::ArrayW<T,::Array<T>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<T,::Array<T>*>, 0x18>(this, std::forward<::ArrayW<T,::Array<T>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<T,::Array<T>*>& System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>::__get_array()  {
return ::cordl_internals::getInstanceField<::ArrayW<T,::Array<T>*>, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<T,::Array<T>*> const& System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>::__get_array() const {
return ::cordl_internals::getInstanceField<::ArrayW<T,::Array<T>*>, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>* System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>::_CopyTo_b__0(::System::Collections::Generic::__SortedSet_1__Node<T>*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>*>::get(),
                            "<CopyTo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, node);
}
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<uint32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<uint32_t>::*)()>(&::System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<uint32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<uint32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<uint32_t>._System_Collections_ICollection_CopyTo_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<uint32_t>::*)(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*)>(&::System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<uint32_t>::_System_Collections_ICollection_CopyTo_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<uint32_t>*>::get(),
                            "<System.Collections.ICollection.CopyTo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<uint32_t>::__set_index(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<uint32_t>::__get_index()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<uint32_t>::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<uint32_t>::__set_objects(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x18>(this, std::forward<::ArrayW<::System::Object*,::Array<::System::Object*>*>>(value));
}
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<uint32_t>::__get_objects()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x18>(this);
}
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<uint32_t>::__get_objects() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x18>(this);
}
inline ::System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<uint32_t>* System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<uint32_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<uint32_t>*>());
}
inline void System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<uint32_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<uint32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<uint32_t>::_System_Collections_ICollection_CopyTo_b__0(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<uint32_t>*>::get(),
                            "<System.Collections.ICollection.CopyTo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, node);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>::__set_index(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>::__get_index()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>::__set_objects(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x18>(this, std::forward<::ArrayW<::System::Object*,::Array<::System::Object*>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>::__get_objects()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>::__get_objects() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>* System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>::_System_Collections_ICollection_CopyTo_b__0(::System::Collections::Generic::__SortedSet_1__Node<T>*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>*>::get(),
                            "<System.Collections.ICollection.CopyTo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, node);
}
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)()>(&::System::Collections::Generic::SortedSet_1<uint32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.InOrderTreeWalk
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::System::Collections::Generic::TreeWalkPredicate_1<uint32_t>*)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::InOrderTreeWalk)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Generic::SortedSet_1<uint32_t>::*)()>(&::System::Collections::Generic::SortedSet_1<uint32_t>::get_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.get_Comparer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IComparer_1<uint32_t>* (::System::Collections::Generic::SortedSet_1<uint32_t>::*)()>(&::System::Collections::Generic::SortedSet_1<uint32_t>::get_Comparer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "get_Comparer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.System_Collections_Generic_ICollection_T__get_IsReadOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1<uint32_t>::*)()>(&::System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_Generic_ICollection_T__get_IsReadOnly)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "System.Collections.Generic.ICollection<T>.get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.System_Collections_ICollection_get_IsSynchronized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1<uint32_t>::*)()>(&::System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.System_Collections_ICollection_get_SyncRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Collections::Generic::SortedSet_1<uint32_t>::*)()>(&::System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.VersionCheck
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)()>(&::System::Collections::Generic::SortedSet_1<uint32_t>::VersionCheck)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.IsWithinRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(uint32_t)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::IsWithinRange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(uint32_t)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.System_Collections_Generic_ICollection_T__Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(uint32_t)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_Generic_ICollection_T__Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "System.Collections.Generic.ICollection<T>.Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.AddIfNotPresent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(uint32_t)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::AddIfNotPresent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(uint32_t)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::Remove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.DoRemove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(uint32_t)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::DoRemove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)()>(&::System::Collections::Generic::SortedSet_1<uint32_t>::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.Contains
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(uint32_t)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::Contains)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::ArrayW<uint32_t,::Array<uint32_t>*>, int32_t)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::CopyTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t,::Array<uint32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::ArrayW<uint32_t,::Array<uint32_t>*>, int32_t, int32_t)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::CopyTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t,::Array<uint32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.System_Collections_ICollection_CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::System::Array*, int32_t)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_ICollection_CopyTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "System.Collections.ICollection.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t> (::System::Collections::Generic::SortedSet_1<uint32_t>::*)()>(&::System::Collections::Generic::SortedSet_1<uint32_t>::GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.System_Collections_Generic_IEnumerable_T__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<uint32_t>* (::System::Collections::Generic::SortedSet_1<uint32_t>::*)()>(&::System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_Generic_IEnumerable_T__GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Collections::Generic::SortedSet_1<uint32_t>::*)()>(&::System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.InsertionBalance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, ByRef<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::InsertionBalance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "InsertionBalance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.ReplaceChildOrRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::ReplaceChildOrRoot)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "ReplaceChildOrRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.ReplaceNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::ReplaceNode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "ReplaceNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.FindNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(uint32_t)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::FindNode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.InternalIndexOf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(uint32_t)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::InternalIndexOf)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.HasEqualComparer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::System::Collections::Generic::SortedSet_1<uint32_t>*)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::HasEqualComparer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "HasEqualComparer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.SetEquals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::System::Collections::Generic::IEnumerable_1<uint32_t>*)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::SetEquals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "SetEquals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<uint32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.CheckUniqueAndUnfoundElements
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::__SortedSet_1__ElementCount<uint32_t> (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::System::Collections::Generic::IEnumerable_1<uint32_t>*, bool)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::CheckUniqueAndUnfoundElements)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "CheckUniqueAndUnfoundElements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::GetObjectData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::System::Object*)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.OnDeserialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::Generic::SortedSet_1<uint32_t>::*)(::System::Object*)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::OnDeserialization)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::SortedSet_1<uint32_t>.Log2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::System::Collections::Generic::SortedSet_1<uint32_t>::Log2)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "Log2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<uint32_t>"
constexpr  System::Collections::Generic::SortedSet_1<uint32_t>::operator ::System::Collections::Generic::ICollection_1<uint32_t>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<uint32_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<uint32_t>"
constexpr  System::Collections::Generic::SortedSet_1<uint32_t>::operator ::System::Collections::Generic::IEnumerable_1<uint32_t>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<uint32_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  System::Collections::Generic::SortedSet_1<uint32_t>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr  System::Collections::Generic::SortedSet_1<uint32_t>::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>"
constexpr  System::Collections::Generic::SortedSet_1<uint32_t>::operator ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr  System::Collections::Generic::SortedSet_1<uint32_t>::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr  System::Collections::Generic::SortedSet_1<uint32_t>::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
constexpr void System::Collections::Generic::SortedSet_1<uint32_t>::__set_root(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, 0x10>(this, std::forward<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>(value));
}
constexpr ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* System::Collections::Generic::SortedSet_1<uint32_t>::__get_root()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*> System::Collections::Generic::SortedSet_1<uint32_t>::__get_root() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, 0x10>(this);
}
constexpr void System::Collections::Generic::SortedSet_1<uint32_t>::__set_comparer(::System::Collections::Generic::IComparer_1<uint32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IComparer_1<uint32_t>*, 0x18>(this, std::forward<::System::Collections::Generic::IComparer_1<uint32_t>*>(value));
}
constexpr ::System::Collections::Generic::IComparer_1<uint32_t>* System::Collections::Generic::SortedSet_1<uint32_t>::__get_comparer()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<uint32_t>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<uint32_t>*> System::Collections::Generic::SortedSet_1<uint32_t>::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<uint32_t>*, 0x18>(this);
}
constexpr void System::Collections::Generic::SortedSet_1<uint32_t>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Collections::Generic::SortedSet_1<uint32_t>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& System::Collections::Generic::SortedSet_1<uint32_t>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void System::Collections::Generic::SortedSet_1<uint32_t>::__set_version(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Collections::Generic::SortedSet_1<uint32_t>::__get_version()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr int32_t const& System::Collections::Generic::SortedSet_1<uint32_t>::__get_version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr void System::Collections::Generic::SortedSet_1<uint32_t>::__set__syncRoot(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x28>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Collections::Generic::SortedSet_1<uint32_t>::__get__syncRoot()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Collections::Generic::SortedSet_1<uint32_t>::__get__syncRoot() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
constexpr void System::Collections::Generic::SortedSet_1<uint32_t>::__set_siInfo(::System::Runtime::Serialization::SerializationInfo*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::SerializationInfo*, 0x30>(this, std::forward<::System::Runtime::Serialization::SerializationInfo*>(value));
}
constexpr ::System::Runtime::Serialization::SerializationInfo* System::Collections::Generic::SortedSet_1<uint32_t>::__get_siInfo()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::SerializationInfo*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> System::Collections::Generic::SortedSet_1<uint32_t>::__get_siInfo() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::SerializationInfo*, 0x30>(this);
}
inline ::System::Collections::Generic::SortedSet_1<uint32_t>* System::Collections::Generic::SortedSet_1<uint32_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::SortedSet_1<uint32_t>*>());
}
inline void System::Collections::Generic::SortedSet_1<uint32_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::SortedSet_1<uint32_t>* System::Collections::Generic::SortedSet_1<uint32_t>::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::SortedSet_1<uint32_t>*>(info, context));
}
inline void System::Collections::Generic::SortedSet_1<uint32_t>::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, info, context);
}
inline bool System::Collections::Generic::SortedSet_1<uint32_t>::InOrderTreeWalk(::System::Collections::Generic::TreeWalkPredicate_1<uint32_t>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "InOrderTreeWalk",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::TreeWalkPredicate_1<uint32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, action);
}
inline int32_t System::Collections::Generic::SortedSet_1<uint32_t>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IComparer_1<uint32_t>* System::Collections::Generic::SortedSet_1<uint32_t>::get_Comparer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "get_Comparer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IComparer_1<uint32_t>*, false>(*this, ___internal_method);
}
inline bool System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_Generic_ICollection_T__get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "System.Collections.Generic.ICollection<T>.get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::SortedSet_1<uint32_t>::VersionCheck()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "VersionCheck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool System::Collections::Generic::SortedSet_1<uint32_t>::IsWithinRange(uint32_t  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "IsWithinRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, item);
}
inline bool System::Collections::Generic::SortedSet_1<uint32_t>::Add(uint32_t  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, item);
}
inline void System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_Generic_ICollection_T__Add(uint32_t  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "System.Collections.Generic.ICollection<T>.Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item);
}
inline bool System::Collections::Generic::SortedSet_1<uint32_t>::AddIfNotPresent(uint32_t  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "AddIfNotPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, item);
}
inline bool System::Collections::Generic::SortedSet_1<uint32_t>::Remove(uint32_t  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, item);
}
inline bool System::Collections::Generic::SortedSet_1<uint32_t>::DoRemove(uint32_t  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "DoRemove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, item);
}
inline void System::Collections::Generic::SortedSet_1<uint32_t>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool System::Collections::Generic::SortedSet_1<uint32_t>::Contains(uint32_t  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, item);
}
inline void System::Collections::Generic::SortedSet_1<uint32_t>::CopyTo(::ArrayW<uint32_t,::Array<uint32_t>*>  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t,::Array<uint32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, index);
}
inline void System::Collections::Generic::SortedSet_1<uint32_t>::CopyTo(::ArrayW<uint32_t,::Array<uint32_t>*>  array, int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t,::Array<uint32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, index, count);
}
inline void System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "System.Collections.ICollection.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, index);
}
inline ::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t> System::Collections::Generic::SortedSet_1<uint32_t>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<uint32_t>* System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<uint32_t>*, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Collections::Generic::SortedSet_1<uint32_t>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline void System::Collections::Generic::SortedSet_1<uint32_t>::InsertionBalance(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  current, ByRef<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>  parent, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  grandParent, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  greatGrandParent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "InsertionBalance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, current, parent, grandParent, greatGrandParent);
}
inline void System::Collections::Generic::SortedSet_1<uint32_t>::ReplaceChildOrRoot(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  parent, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  child, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  newChild)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "ReplaceChildOrRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, parent, child, newChild);
}
inline void System::Collections::Generic::SortedSet_1<uint32_t>::ReplaceNode(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  match, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  parentOfMatch, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  successor, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  parentOfSuccessor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "ReplaceNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, match, parentOfMatch, successor, parentOfSuccessor);
}
inline ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* System::Collections::Generic::SortedSet_1<uint32_t>::FindNode(uint32_t  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "FindNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*, false>(*this, ___internal_method, item);
}
inline int32_t System::Collections::Generic::SortedSet_1<uint32_t>::InternalIndexOf(uint32_t  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "InternalIndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, item);
}
inline bool System::Collections::Generic::SortedSet_1<uint32_t>::HasEqualComparer(::System::Collections::Generic::SortedSet_1<uint32_t>*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "HasEqualComparer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
inline bool System::Collections::Generic::SortedSet_1<uint32_t>::SetEquals(::System::Collections::Generic::IEnumerable_1<uint32_t>*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "SetEquals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<uint32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
inline ::System::Collections::Generic::__SortedSet_1__ElementCount<uint32_t> System::Collections::Generic::SortedSet_1<uint32_t>::CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<uint32_t>*  other, bool  returnIfUnfound)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "CheckUniqueAndUnfoundElements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__ElementCount<uint32_t>, false>(*this, ___internal_method, other, returnIfUnfound);
}
inline void System::Collections::Generic::SortedSet_1<uint32_t>::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, info, context);
}
inline void System::Collections::Generic::SortedSet_1<uint32_t>::GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, info, context);
}
inline void System::Collections::Generic::SortedSet_1<uint32_t>::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sender);
}
inline void System::Collections::Generic::SortedSet_1<uint32_t>::OnDeserialization(::System::Object*  sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sender);
}
inline int32_t System::Collections::Generic::SortedSet_1<uint32_t>::Log2(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<uint32_t>*>::get(),
                            "Log2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Generic::SortedSet_1<T>::operator ::System::Collections::Generic::ICollection_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Generic::SortedSet_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Generic::SortedSet_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Generic::SortedSet_1<T>::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Generic::SortedSet_1<T>::operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Generic::SortedSet_1<T>::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Generic::SortedSet_1<T>::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Generic::SortedSet_1<T>::__set_root(::System::Collections::Generic::__SortedSet_1__Node<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::__SortedSet_1__Node<T>*, 0x10>(this, std::forward<::System::Collections::Generic::__SortedSet_1__Node<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::__SortedSet_1__Node<T>* System::Collections::Generic::SortedSet_1<T>::__get_root()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__SortedSet_1__Node<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__SortedSet_1__Node<T>*> System::Collections::Generic::SortedSet_1<T>::__get_root() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__SortedSet_1__Node<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Generic::SortedSet_1<T>::__set_comparer(::System::Collections::Generic::IComparer_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IComparer_1<T>*, 0x18>(this, std::forward<::System::Collections::Generic::IComparer_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::IComparer_1<T>* System::Collections::Generic::SortedSet_1<T>::__get_comparer()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<T>*> System::Collections::Generic::SortedSet_1<T>::__get_comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IComparer_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Generic::SortedSet_1<T>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Collections::Generic::SortedSet_1<T>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Collections::Generic::SortedSet_1<T>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Generic::SortedSet_1<T>::__set_version(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Collections::Generic::SortedSet_1<T>::__get_version()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Collections::Generic::SortedSet_1<T>::__get_version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Generic::SortedSet_1<T>::__set__syncRoot(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x28>(this, std::forward<::System::Object*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Object* System::Collections::Generic::SortedSet_1<T>::__get__syncRoot()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Collections::Generic::SortedSet_1<T>::__get__syncRoot() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Generic::SortedSet_1<T>::__set_siInfo(::System::Runtime::Serialization::SerializationInfo*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::SerializationInfo*, 0x30>(this, std::forward<::System::Runtime::Serialization::SerializationInfo*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::Serialization::SerializationInfo* System::Collections::Generic::SortedSet_1<T>::__get_siInfo()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::SerializationInfo*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> System::Collections::Generic::SortedSet_1<T>::__get_siInfo() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::SerializationInfo*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::SortedSet_1<T>* System::Collections::Generic::SortedSet_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::SortedSet_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::SortedSet_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::SortedSet_1<T>* System::Collections::Generic::SortedSet_1<T>::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::SortedSet_1<T>*>(info, context));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::SortedSet_1<T>::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, info, context);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Generic::SortedSet_1<T>::InOrderTreeWalk(::System::Collections::Generic::TreeWalkPredicate_1<T>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "InOrderTreeWalk",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::TreeWalkPredicate_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, action);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t System::Collections::Generic::SortedSet_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::IComparer_1<T>* System::Collections::Generic::SortedSet_1<T>::get_Comparer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "get_Comparer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IComparer_1<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Generic::SortedSet_1<T>::System_Collections_Generic_ICollection_T__get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "System.Collections.Generic.ICollection<T>.get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Generic::SortedSet_1<T>::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Object* System::Collections::Generic::SortedSet_1<T>::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::SortedSet_1<T>::VersionCheck()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "VersionCheck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Generic::SortedSet_1<T>::IsWithinRange(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "IsWithinRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Generic::SortedSet_1<T>::Add(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::SortedSet_1<T>::System_Collections_Generic_ICollection_T__Add(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "System.Collections.Generic.ICollection<T>.Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Generic::SortedSet_1<T>::AddIfNotPresent(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "AddIfNotPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Generic::SortedSet_1<T>::Remove(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Generic::SortedSet_1<T>::DoRemove(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "DoRemove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::SortedSet_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Generic::SortedSet_1<T>::Contains(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::SortedSet_1<T>::CopyTo(::ArrayW<T,::Array<T>*>  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, index);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::SortedSet_1<T>::CopyTo(::ArrayW<T,::Array<T>*>  array, int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, index, count);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::SortedSet_1<T>::System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "System.Collections.ICollection.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, index);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::__SortedSet_1__Enumerator<T> System::Collections::Generic::SortedSet_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Enumerator<T>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::IEnumerator_1<T>* System::Collections::Generic::SortedSet_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "System.Collections.Generic.IEnumerable<T>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::IEnumerator* System::Collections::Generic::SortedSet_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::SortedSet_1<T>::InsertionBalance(::System::Collections::Generic::__SortedSet_1__Node<T>*  current, ByRef<::System::Collections::Generic::__SortedSet_1__Node<T>*>  parent, ::System::Collections::Generic::__SortedSet_1__Node<T>*  grandParent, ::System::Collections::Generic::__SortedSet_1__Node<T>*  greatGrandParent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "InsertionBalance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::__SortedSet_1__Node<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, current, parent, grandParent, greatGrandParent);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::SortedSet_1<T>::ReplaceChildOrRoot(::System::Collections::Generic::__SortedSet_1__Node<T>*  parent, ::System::Collections::Generic::__SortedSet_1__Node<T>*  child, ::System::Collections::Generic::__SortedSet_1__Node<T>*  newChild)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "ReplaceChildOrRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, parent, child, newChild);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::SortedSet_1<T>::ReplaceNode(::System::Collections::Generic::__SortedSet_1__Node<T>*  match, ::System::Collections::Generic::__SortedSet_1__Node<T>*  parentOfMatch, ::System::Collections::Generic::__SortedSet_1__Node<T>*  successor, ::System::Collections::Generic::__SortedSet_1__Node<T>*  parentOfSuccessor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "ReplaceNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::__SortedSet_1__Node<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, match, parentOfMatch, successor, parentOfSuccessor);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::__SortedSet_1__Node<T>* System::Collections::Generic::SortedSet_1<T>::FindNode(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "FindNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__Node<T>*, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t System::Collections::Generic::SortedSet_1<T>::InternalIndexOf(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "InternalIndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Generic::SortedSet_1<T>::HasEqualComparer(::System::Collections::Generic::SortedSet_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "HasEqualComparer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::SortedSet_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Generic::SortedSet_1<T>::SetEquals(::System::Collections::Generic::IEnumerable_1<T>*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "SetEquals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::__SortedSet_1__ElementCount<T> System::Collections::Generic::SortedSet_1<T>::CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<T>*  other, bool  returnIfUnfound)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "CheckUniqueAndUnfoundElements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__SortedSet_1__ElementCount<T>, false>(*this, ___internal_method, other, returnIfUnfound);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::SortedSet_1<T>::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, info, context);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::SortedSet_1<T>::GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, info, context);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::SortedSet_1<T>::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sender);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::SortedSet_1<T>::OnDeserialization(::System::Object*  sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sender);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t System::Collections::Generic::SortedSet_1<T>::Log2(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                            "Log2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
