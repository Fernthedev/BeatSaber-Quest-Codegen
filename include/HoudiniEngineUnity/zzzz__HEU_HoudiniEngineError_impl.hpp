#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniEngineError_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniEngineError._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniEngineError::*)()>(&::HoudiniEngineUnity::HEU_HoudiniEngineError::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x21893a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniEngineError*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniEngineError._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_HoudiniEngineError::*)(::StringW)>(&::HoudiniEngineUnity::HEU_HoudiniEngineError::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2189420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniEngineError*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_HoudiniEngineError.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_HoudiniEngineError::*)()>(&::HoudiniEngineUnity::HEU_HoudiniEngineError::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21894a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniEngineError*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniEngineError*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_HoudiniEngineError::__set__errorMsg(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x90>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_HoudiniEngineError::__get__errorMsg()  {
return ::cordl_internals::getInstanceField<::StringW, 0x90>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_HoudiniEngineError::__get__errorMsg() const {
return ::cordl_internals::getInstanceField<::StringW, 0x90>(this);
}
inline ::HoudiniEngineUnity::HEU_HoudiniEngineError* HoudiniEngineUnity::HEU_HoudiniEngineError::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_HoudiniEngineError*>());
}
inline void HoudiniEngineUnity::HEU_HoudiniEngineError::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniEngineError*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_HoudiniEngineError* HoudiniEngineUnity::HEU_HoudiniEngineError::New_ctor(::StringW  errorMsg)  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_HoudiniEngineError*>(errorMsg));
}
inline void HoudiniEngineUnity::HEU_HoudiniEngineError::_ctor(::StringW  errorMsg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniEngineError*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, errorMsg);
}
inline ::StringW HoudiniEngineUnity::HEU_HoudiniEngineError::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_HoudiniEngineError*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
