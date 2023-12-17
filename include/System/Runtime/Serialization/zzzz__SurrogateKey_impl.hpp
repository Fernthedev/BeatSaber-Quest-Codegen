#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__SurrogateKey_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::SurrogateKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SurrogateKey::*)(::System::Type*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Serialization::SurrogateKey::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x24bfb94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SurrogateKey*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SurrogateKey.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::SurrogateKey::*)()>(&::System::Runtime::Serialization::SurrogateKey::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x24bfdcc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SurrogateKey*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SurrogateKey*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::SurrogateKey::__set_m_type(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x10>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* System::Runtime::Serialization::SurrogateKey::__get_m_type()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> System::Runtime::Serialization::SurrogateKey::__get_m_type() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x10>(this);
}
constexpr void System::Runtime::Serialization::SurrogateKey::__set_m_context(::System::Runtime::Serialization::StreamingContext  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::StreamingContext, 0x18>(this, std::forward<::System::Runtime::Serialization::StreamingContext>(value));
}
constexpr ::System::Runtime::Serialization::StreamingContext& System::Runtime::Serialization::SurrogateKey::__get_m_context()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::StreamingContext, 0x18>(this);
}
constexpr ::System::Runtime::Serialization::StreamingContext const& System::Runtime::Serialization::SurrogateKey::__get_m_context() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::StreamingContext, 0x18>(this);
}
inline ::System::Runtime::Serialization::SurrogateKey* System::Runtime::Serialization::SurrogateKey::New_ctor(::System::Type*  type, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::SurrogateKey*>(type, context));
}
inline void System::Runtime::Serialization::SurrogateKey::_ctor(::System::Type*  type, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SurrogateKey*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type, context);
}
inline int32_t System::Runtime::Serialization::SurrogateKey::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SurrogateKey*>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
