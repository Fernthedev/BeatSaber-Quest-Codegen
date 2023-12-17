#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Reflection/zzzz__ICustomAttributeProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/InteropServices/zzzz___ParameterInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__IObjectReference_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterAttributes_def.hpp"
//  Writing Method size for method: ::System::Reflection::ParameterInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e91c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.get_Attributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ParameterAttributes (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::get_Attributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e91cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.get_Member
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MemberInfo* (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::get_Member)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e91d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.get_Name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e91dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.get_ParameterType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::get_ParameterType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e91e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.get_Position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::get_Position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e91ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.get_IsIn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::get_IsIn)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24e91f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                            "get_IsIn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.get_IsOptional
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::get_IsOptional)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24e9210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                            "get_IsOptional",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.get_IsOut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::get_IsOut)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24e922c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                            "get_IsOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.get_DefaultValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::get_DefaultValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24e9248;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.IsDefined
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::ParameterInfo::*)(::System::Type*, bool)>(&::System::Reflection::ParameterInfo::IsDefined)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x24e9270;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.GetCustomAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*,::Array<::System::Object*>*> (::System::Reflection::ParameterInfo::*)(bool)>(&::System::Reflection::ParameterInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x24e9324;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.GetCustomAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*,::Array<::System::Object*>*> (::System::Reflection::ParameterInfo::*)(::System::Type*, bool)>(&::System::Reflection::ParameterInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x24e93a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.GetRealObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Reflection::ParameterInfo::*)(::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::ParameterInfo::GetRealObject)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x24e94a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                            "GetRealObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ParameterInfo.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::ParameterInfo::*)()>(&::System::Reflection::ParameterInfo::ToString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x24e9784;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Reflection::ICustomAttributeProvider"
constexpr  System::Reflection::ParameterInfo::operator ::System::Reflection::ICustomAttributeProvider*() noexcept {
return static_cast<::System::Reflection::ICustomAttributeProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
constexpr  System::Reflection::ParameterInfo::operator ::System::Runtime::Serialization::IObjectReference*() noexcept {
return static_cast<::System::Runtime::Serialization::IObjectReference*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::InteropServices::_ParameterInfo"
constexpr  System::Reflection::ParameterInfo::operator ::System::Runtime::InteropServices::_ParameterInfo*() noexcept {
return static_cast<::System::Runtime::InteropServices::_ParameterInfo*>(static_cast<void*>(this));
}
constexpr void System::Reflection::ParameterInfo::__set_AttrsImpl(::System::Reflection::ParameterAttributes  value)  {
::cordl_internals::setInstanceField<::System::Reflection::ParameterAttributes, 0x10>(this, std::forward<::System::Reflection::ParameterAttributes>(value));
}
constexpr ::System::Reflection::ParameterAttributes& System::Reflection::ParameterInfo::__get_AttrsImpl()  {
return ::cordl_internals::getInstanceField<::System::Reflection::ParameterAttributes, 0x10>(this);
}
constexpr ::System::Reflection::ParameterAttributes const& System::Reflection::ParameterInfo::__get_AttrsImpl() const {
return ::cordl_internals::getInstanceField<::System::Reflection::ParameterAttributes, 0x10>(this);
}
constexpr void System::Reflection::ParameterInfo::__set_ClassImpl(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x18>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* System::Reflection::ParameterInfo::__get_ClassImpl()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> System::Reflection::ParameterInfo::__get_ClassImpl() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x18>(this);
}
constexpr void System::Reflection::ParameterInfo::__set_DefaultValueImpl(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x20>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Reflection::ParameterInfo::__get_DefaultValueImpl()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Reflection::ParameterInfo::__get_DefaultValueImpl() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
constexpr void System::Reflection::ParameterInfo::__set_MemberImpl(::System::Reflection::MemberInfo*  value)  {
::cordl_internals::setInstanceField<::System::Reflection::MemberInfo*, 0x28>(this, std::forward<::System::Reflection::MemberInfo*>(value));
}
constexpr ::System::Reflection::MemberInfo* System::Reflection::ParameterInfo::__get_MemberImpl()  {
return ::cordl_internals::getInstanceField<::System::Reflection::MemberInfo*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MemberInfo*> System::Reflection::ParameterInfo::__get_MemberImpl() const {
return ::cordl_internals::getInstanceField<::System::Reflection::MemberInfo*, 0x28>(this);
}
constexpr void System::Reflection::ParameterInfo::__set_NameImpl(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Reflection::ParameterInfo::__get_NameImpl()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr ::StringW const& System::Reflection::ParameterInfo::__get_NameImpl() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr void System::Reflection::ParameterInfo::__set_PositionImpl(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Reflection::ParameterInfo::__get_PositionImpl()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr int32_t const& System::Reflection::ParameterInfo::__get_PositionImpl() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
inline ::System::Reflection::ParameterInfo* System::Reflection::ParameterInfo::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Reflection::ParameterInfo*>());
}
inline void System::Reflection::ParameterInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Reflection::ParameterAttributes System::Reflection::ParameterInfo::get_Attributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                            "get_Attributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::ParameterAttributes, false>(*this, ___internal_method);
}
inline ::System::Reflection::MemberInfo* System::Reflection::ParameterInfo::get_Member()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                            "get_Member",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberInfo*, false>(*this, ___internal_method);
}
inline ::StringW System::Reflection::ParameterInfo::get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::System::Type* System::Reflection::ParameterInfo::get_ParameterType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                            "get_ParameterType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(*this, ___internal_method);
}
inline int32_t System::Reflection::ParameterInfo::get_Position()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                            "get_Position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline bool System::Reflection::ParameterInfo::get_IsIn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                            "get_IsIn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Reflection::ParameterInfo::get_IsOptional()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                            "get_IsOptional",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Reflection::ParameterInfo::get_IsOut()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                            "get_IsOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* System::Reflection::ParameterInfo::get_DefaultValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                            "get_DefaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline bool System::Reflection::ParameterInfo::IsDefined(::System::Type*  attributeType, bool  inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                            "IsDefined",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, attributeType, inherit);
}
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> System::Reflection::ParameterInfo::GetCustomAttributes(bool  inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*,::Array<::System::Object*>*>, false>(*this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> System::Reflection::ParameterInfo::GetCustomAttributes(::System::Type*  attributeType, bool  inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*,::Array<::System::Object*>*>, false>(*this, ___internal_method, attributeType, inherit);
}
inline ::System::Object* System::Reflection::ParameterInfo::GetRealObject(::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                            "GetRealObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method, context);
}
inline ::StringW System::Reflection::ParameterInfo::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ParameterInfo*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
