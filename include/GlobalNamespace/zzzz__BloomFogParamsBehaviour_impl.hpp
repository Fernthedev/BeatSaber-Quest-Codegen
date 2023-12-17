#pragma once
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BloomFogParamsBehaviour_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "GlobalNamespace/zzzz__BloomFogEnvironmentParams_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "GlobalNamespace/zzzz__BloomFogSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomFogParamsBehaviour.ProcessFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomFogParamsBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::GlobalNamespace::BloomFogParamsBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2315668;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFogParamsBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFogParamsBehaviour*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomFogParamsBehaviour.OnPlayableDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomFogParamsBehaviour::*)(::UnityEngine::Playables::Playable)>(&::GlobalNamespace::BloomFogParamsBehaviour::OnPlayableDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x23157c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFogParamsBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFogParamsBehaviour*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomFogParamsBehaviour._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomFogParamsBehaviour::*)()>(&::GlobalNamespace::BloomFogParamsBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2315850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFogParamsBehaviour*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BloomFogParamsBehaviour::__set__bloomFogParams(::GlobalNamespace::BloomFogEnvironmentParams*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BloomFogEnvironmentParams*, 0x10>(this, std::forward<::GlobalNamespace::BloomFogEnvironmentParams*>(value));
}
constexpr ::GlobalNamespace::BloomFogEnvironmentParams* GlobalNamespace::BloomFogParamsBehaviour::__get__bloomFogParams()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomFogEnvironmentParams*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogEnvironmentParams*> GlobalNamespace::BloomFogParamsBehaviour::__get__bloomFogParams() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomFogEnvironmentParams*, 0x10>(this);
}
constexpr void GlobalNamespace::BloomFogParamsBehaviour::__set__blend(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BloomFogParamsBehaviour::__get__blend()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::BloomFogParamsBehaviour::__get__blend() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void GlobalNamespace::BloomFogParamsBehaviour::__set__bloomFog(::GlobalNamespace::BloomFogSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BloomFogSO*, 0x20>(this, std::forward<::GlobalNamespace::BloomFogSO*>(value));
}
constexpr ::GlobalNamespace::BloomFogSO* GlobalNamespace::BloomFogParamsBehaviour::__get__bloomFog()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomFogSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogSO*> GlobalNamespace::BloomFogParamsBehaviour::__get__bloomFog() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomFogSO*, 0x20>(this);
}
constexpr void GlobalNamespace::BloomFogParamsBehaviour::__set__initialized(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::BloomFogParamsBehaviour::__get__initialized()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& GlobalNamespace::BloomFogParamsBehaviour::__get__initialized() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
inline void GlobalNamespace::BloomFogParamsBehaviour::ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFogParamsBehaviour*>::get(),
                            "ProcessFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::FrameData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, playable, info, playerData);
}
inline void GlobalNamespace::BloomFogParamsBehaviour::OnPlayableDestroy(::UnityEngine::Playables::Playable  playable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFogParamsBehaviour*>::get(),
                            "OnPlayableDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, playable);
}
inline ::GlobalNamespace::BloomFogParamsBehaviour* GlobalNamespace::BloomFogParamsBehaviour::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BloomFogParamsBehaviour*>());
}
inline void GlobalNamespace::BloomFogParamsBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFogParamsBehaviour*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
