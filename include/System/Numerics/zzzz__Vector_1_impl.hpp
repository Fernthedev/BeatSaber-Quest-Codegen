#pragma once
#include "System/Numerics/zzzz__Vector_1_def.hpp"
#include "System/Numerics/zzzz__Register_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/Numerics/zzzz__Vector_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
template<typename T>
constexpr void System::Numerics::__Vector_1__VectorSizeHelper<T>::__set__placeholder(::System::Numerics::Vector_1<T>  value)  {
::cordl_internals::setInstanceField<::System::Numerics::Vector_1<T>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Numerics::Vector_1<T>>(value));
}
template<typename T>
constexpr ::System::Numerics::Vector_1<T>& System::Numerics::__Vector_1__VectorSizeHelper<T>::__get__placeholder()  {
return ::cordl_internals::getInstanceField<::System::Numerics::Vector_1<T>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename T>
constexpr ::System::Numerics::Vector_1<T> const& System::Numerics::__Vector_1__VectorSizeHelper<T>::__get__placeholder() const {
return ::cordl_internals::getInstanceField<::System::Numerics::Vector_1<T>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename T>
constexpr void System::Numerics::__Vector_1__VectorSizeHelper<T>::__set__byte(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
template<typename T>
constexpr uint8_t& System::Numerics::__Vector_1__VectorSizeHelper<T>::__get__byte()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename T>
constexpr uint8_t const& System::Numerics::__Vector_1__VectorSizeHelper<T>::__get__byte() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "_placeholder", ty: "::System::Numerics::Vector_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_byte", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::System::Numerics::__Vector_1__VectorSizeHelper<T>::__Vector_1__VectorSizeHelper(::System::Numerics::Vector_1<T>  _placeholder, uint8_t  _byte) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->_placeholder = _placeholder;
this->_byte = _byte;
}
//  Writing Method size for method: ::System::Numerics::Vector_1<uint16_t>.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::Numerics::Vector_1<uint16_t>::get_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint16_t>.get_Zero
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Numerics::Vector_1<uint16_t> (*)()>(&::System::Numerics::Vector_1<uint16_t>::get_Zero)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "get_Zero",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint16_t>.InitializeCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::Numerics::Vector_1<uint16_t>::InitializeCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "InitializeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint16_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Numerics::Vector_1<uint16_t>::*)(uint16_t)>(&::System::Numerics::Vector_1<uint16_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint16_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Numerics::Vector_1<uint16_t>::*)(::cordl_internals::Ptr<void>)>(&::System::Numerics::Vector_1<uint16_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint16_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Numerics::Vector_1<uint16_t>::*)(::cordl_internals::Ptr<void>, int32_t)>(&::System::Numerics::Vector_1<uint16_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint16_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Numerics::Vector_1<uint16_t>::*)(ByRef<::System::Numerics::Register>)>(&::System::Numerics::Vector_1<uint16_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Numerics::Register>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint16_t>.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::System::Numerics::Vector_1<uint16_t>::*)(int32_t)>(&::System::Numerics::Vector_1<uint16_t>::get_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint16_t>.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Numerics::Vector_1<uint16_t>::*)(::System::Object*)>(&::System::Numerics::Vector_1<uint16_t>::Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint16_t>.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Numerics::Vector_1<uint16_t>::*)(::System::Numerics::Vector_1<uint16_t>)>(&::System::Numerics::Vector_1<uint16_t>::Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint16_t>.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Numerics::Vector_1<uint16_t>::*)()>(&::System::Numerics::Vector_1<uint16_t>::GetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint16_t>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Numerics::Vector_1<uint16_t>::*)()>(&::System::Numerics::Vector_1<uint16_t>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint16_t>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Numerics::Vector_1<uint16_t>::*)(::StringW, ::System::IFormatProvider*)>(&::System::Numerics::Vector_1<uint16_t>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint16_t>.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Numerics::Vector_1<uint16_t>, ::System::Numerics::Vector_1<uint16_t>)>(&::System::Numerics::Vector_1<uint16_t>::op_Equality)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint16_t>.op_Inequality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Numerics::Vector_1<uint16_t>, ::System::Numerics::Vector_1<uint16_t>)>(&::System::Numerics::Vector_1<uint16_t>::op_Inequality)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint16_t>.op_Explicit___System__Numerics__Vector_1_uint64_t_
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Numerics::Vector_1<uint64_t> (*)(::System::Numerics::Vector_1<uint16_t>)>(&::System::Numerics::Vector_1<uint16_t>::op_Explicit___System__Numerics__Vector_1_uint64_t_)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint16_t>.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Numerics::Vector_1<uint16_t> (*)(::System::Numerics::Vector_1<uint16_t>, ::System::Numerics::Vector_1<uint16_t>)>(&::System::Numerics::Vector_1<uint16_t>::Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint16_t>.ScalarEquals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint16_t, uint16_t)>(&::System::Numerics::Vector_1<uint16_t>::ScalarEquals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "ScalarEquals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint16_t>.GetOneValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)()>(&::System::Numerics::Vector_1<uint16_t>::GetOneValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "GetOneValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint16_t>.GetAllBitsSetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)()>(&::System::Numerics::Vector_1<uint16_t>::GetAllBitsSetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "GetAllBitsSetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::System::Numerics::Vector_1<uint16_t>>"
constexpr  System::Numerics::Vector_1<uint16_t>::operator ::System::IEquatable_1<::System::Numerics::Vector_1<uint16_t>>*()  {
return static_cast<::System::IEquatable_1<::System::Numerics::Vector_1<uint16_t>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr  System::Numerics::Vector_1<uint16_t>::operator ::System::IFormattable*()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void System::Numerics::Vector_1<uint16_t>::__set__cordl_register(::System::Numerics::Register  value)  {
::cordl_internals::setInstanceField<::System::Numerics::Register, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Numerics::Register>(value));
}
constexpr ::System::Numerics::Register& System::Numerics::Vector_1<uint16_t>::__get__cordl_register()  {
return ::cordl_internals::getInstanceField<::System::Numerics::Register, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Numerics::Register const& System::Numerics::Vector_1<uint16_t>::__get__cordl_register() const {
return ::cordl_internals::getInstanceField<::System::Numerics::Register, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Numerics::Vector_1<uint16_t>::setStaticF_s_count(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_count", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Numerics::Vector_1<uint16_t>::getStaticF_s_count()  {
return ::cordl_internals::getStaticField<int32_t, "s_count", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get>();
}
inline void System::Numerics::Vector_1<uint16_t>::setStaticF_s_zero(::System::Numerics::Vector_1<uint16_t>  value)  {
::cordl_internals::setStaticField<::System::Numerics::Vector_1<uint16_t>, "s_zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get>(std::forward<::System::Numerics::Vector_1<uint16_t>>(value));
}
inline ::System::Numerics::Vector_1<uint16_t> System::Numerics::Vector_1<uint16_t>::getStaticF_s_zero()  {
return ::cordl_internals::getStaticField<::System::Numerics::Vector_1<uint16_t>, "s_zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get>();
}
inline void System::Numerics::Vector_1<uint16_t>::setStaticF_s_one(::System::Numerics::Vector_1<uint16_t>  value)  {
::cordl_internals::setStaticField<::System::Numerics::Vector_1<uint16_t>, "s_one", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get>(std::forward<::System::Numerics::Vector_1<uint16_t>>(value));
}
inline ::System::Numerics::Vector_1<uint16_t> System::Numerics::Vector_1<uint16_t>::getStaticF_s_one()  {
return ::cordl_internals::getStaticField<::System::Numerics::Vector_1<uint16_t>, "s_one", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get>();
}
inline void System::Numerics::Vector_1<uint16_t>::setStaticF_s_allOnes(::System::Numerics::Vector_1<uint16_t>  value)  {
::cordl_internals::setStaticField<::System::Numerics::Vector_1<uint16_t>, "s_allOnes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get>(std::forward<::System::Numerics::Vector_1<uint16_t>>(value));
}
inline ::System::Numerics::Vector_1<uint16_t> System::Numerics::Vector_1<uint16_t>::getStaticF_s_allOnes()  {
return ::cordl_internals::getStaticField<::System::Numerics::Vector_1<uint16_t>, "s_allOnes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get>();
}
inline int32_t System::Numerics::Vector_1<uint16_t>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline ::System::Numerics::Vector_1<uint16_t> System::Numerics::Vector_1<uint16_t>::get_Zero()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "get_Zero",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Numerics::Vector_1<uint16_t>, false>(nullptr, ___internal_method);
}
inline int32_t System::Numerics::Vector_1<uint16_t>::InitializeCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "InitializeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void System::Numerics::Vector_1<uint16_t>::_ctor(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void System::Numerics::Vector_1<uint16_t>::_ctor(::cordl_internals::Ptr<void>  dataPointer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, dataPointer);
}
inline void System::Numerics::Vector_1<uint16_t>::_ctor(::cordl_internals::Ptr<void>  dataPointer, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, dataPointer, offset);
}
inline void System::Numerics::Vector_1<uint16_t>::_ctor(ByRef<::System::Numerics::Register>  existingRegister)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Numerics::Register>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, existingRegister);
}
inline uint16_t System::Numerics::Vector_1<uint16_t>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(*this, ___internal_method, index);
}
inline bool System::Numerics::Vector_1<uint16_t>::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
inline bool System::Numerics::Vector_1<uint16_t>::Equals(::System::Numerics::Vector_1<uint16_t>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
inline int32_t System::Numerics::Vector_1<uint16_t>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::StringW System::Numerics::Vector_1<uint16_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW System::Numerics::Vector_1<uint16_t>::ToString(::StringW  format, ::System::IFormatProvider*  formatProvider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, format, formatProvider);
}
inline bool System::Numerics::Vector_1<uint16_t>::op_Equality(::System::Numerics::Vector_1<uint16_t>  left, ::System::Numerics::Vector_1<uint16_t>  right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline bool System::Numerics::Vector_1<uint16_t>::op_Inequality(::System::Numerics::Vector_1<uint16_t>  left, ::System::Numerics::Vector_1<uint16_t>  right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline ::System::Numerics::Vector_1<uint64_t> System::Numerics::Vector_1<uint16_t>::op_Explicit___System__Numerics__Vector_1_uint64_t_(::System::Numerics::Vector_1<uint16_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Numerics::Vector_1<uint64_t>, false>(nullptr, ___internal_method, value);
}
inline ::System::Numerics::Vector_1<uint16_t> System::Numerics::Vector_1<uint16_t>::Equals(::System::Numerics::Vector_1<uint16_t>  left, ::System::Numerics::Vector_1<uint16_t>  right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Numerics::Vector_1<uint16_t>, false>(nullptr, ___internal_method, left, right);
}
inline bool System::Numerics::Vector_1<uint16_t>::ScalarEquals(uint16_t  left, uint16_t  right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "ScalarEquals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline uint16_t System::Numerics::Vector_1<uint16_t>::GetOneValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "GetOneValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method);
}
inline uint16_t System::Numerics::Vector_1<uint16_t>::GetAllBitsSetValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint16_t>>::get(),
                            "GetAllBitsSetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_cordl_register", ty: "::System::Numerics::Register", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Numerics::Vector_1<uint16_t>::Vector_1(::System::Numerics::Register  _cordl_register) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->_cordl_register = _cordl_register;
}
//  Writing Method size for method: ::System::Numerics::Vector_1<uint64_t>.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::Numerics::Vector_1<uint64_t>::get_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint64_t>.get_Zero
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Numerics::Vector_1<uint64_t> (*)()>(&::System::Numerics::Vector_1<uint64_t>::get_Zero)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "get_Zero",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint64_t>.InitializeCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::Numerics::Vector_1<uint64_t>::InitializeCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "InitializeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint64_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Numerics::Vector_1<uint64_t>::*)(uint64_t)>(&::System::Numerics::Vector_1<uint64_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint64_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Numerics::Vector_1<uint64_t>::*)(::cordl_internals::Ptr<void>)>(&::System::Numerics::Vector_1<uint64_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint64_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Numerics::Vector_1<uint64_t>::*)(::cordl_internals::Ptr<void>, int32_t)>(&::System::Numerics::Vector_1<uint64_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint64_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Numerics::Vector_1<uint64_t>::*)(ByRef<::System::Numerics::Register>)>(&::System::Numerics::Vector_1<uint64_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Numerics::Register>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint64_t>.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::System::Numerics::Vector_1<uint64_t>::*)(int32_t)>(&::System::Numerics::Vector_1<uint64_t>::get_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint64_t>.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Numerics::Vector_1<uint64_t>::*)(::System::Object*)>(&::System::Numerics::Vector_1<uint64_t>::Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint64_t>.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Numerics::Vector_1<uint64_t>::*)(::System::Numerics::Vector_1<uint64_t>)>(&::System::Numerics::Vector_1<uint64_t>::Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint64_t>.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Numerics::Vector_1<uint64_t>::*)()>(&::System::Numerics::Vector_1<uint64_t>::GetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint64_t>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Numerics::Vector_1<uint64_t>::*)()>(&::System::Numerics::Vector_1<uint64_t>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint64_t>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Numerics::Vector_1<uint64_t>::*)(::StringW, ::System::IFormatProvider*)>(&::System::Numerics::Vector_1<uint64_t>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint64_t>.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Numerics::Vector_1<uint64_t>, ::System::Numerics::Vector_1<uint64_t>)>(&::System::Numerics::Vector_1<uint64_t>::op_Equality)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint64_t>.op_Inequality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Numerics::Vector_1<uint64_t>, ::System::Numerics::Vector_1<uint64_t>)>(&::System::Numerics::Vector_1<uint64_t>::op_Inequality)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint64_t>.op_Explicit___System__Numerics__Vector_1_uint64_t_
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Numerics::Vector_1<uint64_t> (*)(::System::Numerics::Vector_1<uint64_t>)>(&::System::Numerics::Vector_1<uint64_t>::op_Explicit___System__Numerics__Vector_1_uint64_t_)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint64_t>.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Numerics::Vector_1<uint64_t> (*)(::System::Numerics::Vector_1<uint64_t>, ::System::Numerics::Vector_1<uint64_t>)>(&::System::Numerics::Vector_1<uint64_t>::Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint64_t>.ScalarEquals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint64_t, uint64_t)>(&::System::Numerics::Vector_1<uint64_t>::ScalarEquals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "ScalarEquals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint64_t>.GetOneValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)()>(&::System::Numerics::Vector_1<uint64_t>::GetOneValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "GetOneValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::Vector_1<uint64_t>.GetAllBitsSetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)()>(&::System::Numerics::Vector_1<uint64_t>::GetAllBitsSetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "GetAllBitsSetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::System::Numerics::Vector_1<uint64_t>>"
constexpr  System::Numerics::Vector_1<uint64_t>::operator ::System::IEquatable_1<::System::Numerics::Vector_1<uint64_t>>*()  {
return static_cast<::System::IEquatable_1<::System::Numerics::Vector_1<uint64_t>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr  System::Numerics::Vector_1<uint64_t>::operator ::System::IFormattable*()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void System::Numerics::Vector_1<uint64_t>::__set__cordl_register(::System::Numerics::Register  value)  {
::cordl_internals::setInstanceField<::System::Numerics::Register, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Numerics::Register>(value));
}
constexpr ::System::Numerics::Register& System::Numerics::Vector_1<uint64_t>::__get__cordl_register()  {
return ::cordl_internals::getInstanceField<::System::Numerics::Register, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Numerics::Register const& System::Numerics::Vector_1<uint64_t>::__get__cordl_register() const {
return ::cordl_internals::getInstanceField<::System::Numerics::Register, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Numerics::Vector_1<uint64_t>::setStaticF_s_count(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_count", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Numerics::Vector_1<uint64_t>::getStaticF_s_count()  {
return ::cordl_internals::getStaticField<int32_t, "s_count", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get>();
}
inline void System::Numerics::Vector_1<uint64_t>::setStaticF_s_zero(::System::Numerics::Vector_1<uint64_t>  value)  {
::cordl_internals::setStaticField<::System::Numerics::Vector_1<uint64_t>, "s_zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get>(std::forward<::System::Numerics::Vector_1<uint64_t>>(value));
}
inline ::System::Numerics::Vector_1<uint64_t> System::Numerics::Vector_1<uint64_t>::getStaticF_s_zero()  {
return ::cordl_internals::getStaticField<::System::Numerics::Vector_1<uint64_t>, "s_zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get>();
}
inline void System::Numerics::Vector_1<uint64_t>::setStaticF_s_one(::System::Numerics::Vector_1<uint64_t>  value)  {
::cordl_internals::setStaticField<::System::Numerics::Vector_1<uint64_t>, "s_one", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get>(std::forward<::System::Numerics::Vector_1<uint64_t>>(value));
}
inline ::System::Numerics::Vector_1<uint64_t> System::Numerics::Vector_1<uint64_t>::getStaticF_s_one()  {
return ::cordl_internals::getStaticField<::System::Numerics::Vector_1<uint64_t>, "s_one", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get>();
}
inline void System::Numerics::Vector_1<uint64_t>::setStaticF_s_allOnes(::System::Numerics::Vector_1<uint64_t>  value)  {
::cordl_internals::setStaticField<::System::Numerics::Vector_1<uint64_t>, "s_allOnes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get>(std::forward<::System::Numerics::Vector_1<uint64_t>>(value));
}
inline ::System::Numerics::Vector_1<uint64_t> System::Numerics::Vector_1<uint64_t>::getStaticF_s_allOnes()  {
return ::cordl_internals::getStaticField<::System::Numerics::Vector_1<uint64_t>, "s_allOnes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get>();
}
inline int32_t System::Numerics::Vector_1<uint64_t>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline ::System::Numerics::Vector_1<uint64_t> System::Numerics::Vector_1<uint64_t>::get_Zero()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "get_Zero",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Numerics::Vector_1<uint64_t>, false>(nullptr, ___internal_method);
}
inline int32_t System::Numerics::Vector_1<uint64_t>::InitializeCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "InitializeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void System::Numerics::Vector_1<uint64_t>::_ctor(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void System::Numerics::Vector_1<uint64_t>::_ctor(::cordl_internals::Ptr<void>  dataPointer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, dataPointer);
}
inline void System::Numerics::Vector_1<uint64_t>::_ctor(::cordl_internals::Ptr<void>  dataPointer, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, dataPointer, offset);
}
inline void System::Numerics::Vector_1<uint64_t>::_ctor(ByRef<::System::Numerics::Register>  existingRegister)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Numerics::Register>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, existingRegister);
}
inline uint64_t System::Numerics::Vector_1<uint64_t>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(*this, ___internal_method, index);
}
inline bool System::Numerics::Vector_1<uint64_t>::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
inline bool System::Numerics::Vector_1<uint64_t>::Equals(::System::Numerics::Vector_1<uint64_t>  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
inline int32_t System::Numerics::Vector_1<uint64_t>::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::StringW System::Numerics::Vector_1<uint64_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW System::Numerics::Vector_1<uint64_t>::ToString(::StringW  format, ::System::IFormatProvider*  formatProvider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, format, formatProvider);
}
inline bool System::Numerics::Vector_1<uint64_t>::op_Equality(::System::Numerics::Vector_1<uint64_t>  left, ::System::Numerics::Vector_1<uint64_t>  right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline bool System::Numerics::Vector_1<uint64_t>::op_Inequality(::System::Numerics::Vector_1<uint64_t>  left, ::System::Numerics::Vector_1<uint64_t>  right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline ::System::Numerics::Vector_1<uint64_t> System::Numerics::Vector_1<uint64_t>::op_Explicit___System__Numerics__Vector_1_uint64_t_(::System::Numerics::Vector_1<uint64_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Numerics::Vector_1<uint64_t>, false>(nullptr, ___internal_method, value);
}
inline ::System::Numerics::Vector_1<uint64_t> System::Numerics::Vector_1<uint64_t>::Equals(::System::Numerics::Vector_1<uint64_t>  left, ::System::Numerics::Vector_1<uint64_t>  right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Numerics::Vector_1<uint64_t>, false>(nullptr, ___internal_method, left, right);
}
inline bool System::Numerics::Vector_1<uint64_t>::ScalarEquals(uint64_t  left, uint64_t  right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "ScalarEquals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline uint64_t System::Numerics::Vector_1<uint64_t>::GetOneValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "GetOneValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method);
}
inline uint64_t System::Numerics::Vector_1<uint64_t>::GetAllBitsSetValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<uint64_t>>::get(),
                            "GetAllBitsSetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_cordl_register", ty: "::System::Numerics::Register", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Numerics::Vector_1<uint64_t>::Vector_1(::System::Numerics::Register  _cordl_register) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->_cordl_register = _cordl_register;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
