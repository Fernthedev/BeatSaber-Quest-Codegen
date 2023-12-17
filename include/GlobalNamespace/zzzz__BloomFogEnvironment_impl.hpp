#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BloomFogEnvironment_def.hpp"
#include "GlobalNamespace/zzzz__BloomFogSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomFogEnvironmentParams_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomFogEnvironment.get_fogParams
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BloomFogEnvironmentParams* (::GlobalNamespace::BloomFogEnvironment::*)()>(&::GlobalNamespace::BloomFogEnvironment::get_fogParams)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2101e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFogEnvironment*>::get(),
                            "get_fogParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomFogEnvironment.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomFogEnvironment::*)()>(&::GlobalNamespace::BloomFogEnvironment::OnEnable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2101e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFogEnvironment*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomFogEnvironment.OnValidate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomFogEnvironment::*)()>(&::GlobalNamespace::BloomFogEnvironment::OnValidate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2101edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFogEnvironment*>::get(),
                            "OnValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomFogEnvironment._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomFogEnvironment::*)()>(&::GlobalNamespace::BloomFogEnvironment::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210215c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFogEnvironment*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BloomFogEnvironment::__set__bloomFog(::GlobalNamespace::BloomFogSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BloomFogSO*, 0x18>(this, std::forward<::GlobalNamespace::BloomFogSO*>(value));
}
constexpr ::GlobalNamespace::BloomFogSO* GlobalNamespace::BloomFogEnvironment::__get__bloomFog()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomFogSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogSO*> GlobalNamespace::BloomFogEnvironment::__get__bloomFog() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomFogSO*, 0x18>(this);
}
constexpr void GlobalNamespace::BloomFogEnvironment::__set__fogParams(::GlobalNamespace::BloomFogEnvironmentParams*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BloomFogEnvironmentParams*, 0x20>(this, std::forward<::GlobalNamespace::BloomFogEnvironmentParams*>(value));
}
constexpr ::GlobalNamespace::BloomFogEnvironmentParams* GlobalNamespace::BloomFogEnvironment::__get__fogParams()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomFogEnvironmentParams*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogEnvironmentParams*> GlobalNamespace::BloomFogEnvironment::__get__fogParams() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomFogEnvironmentParams*, 0x20>(this);
}
inline ::GlobalNamespace::BloomFogEnvironmentParams* GlobalNamespace::BloomFogEnvironment::get_fogParams()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFogEnvironment*>::get(),
                            "get_fogParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BloomFogEnvironmentParams*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BloomFogEnvironment::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFogEnvironment*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BloomFogEnvironment::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFogEnvironment*>::get(),
                            "OnValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::BloomFogEnvironment* GlobalNamespace::BloomFogEnvironment::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BloomFogEnvironment*>());
}
inline void GlobalNamespace::BloomFogEnvironment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFogEnvironment*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
