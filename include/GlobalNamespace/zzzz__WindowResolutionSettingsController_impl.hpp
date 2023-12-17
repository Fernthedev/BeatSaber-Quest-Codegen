#pragma once
#include "GlobalNamespace/zzzz__ListSettingsController_impl.hpp"
#include "GlobalNamespace/zzzz__WindowResolutionSettingsController_def.hpp"
#include "GlobalNamespace/zzzz__Vector2IntSO_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WindowResolutionSettingsController.GetInitValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::WindowResolutionSettingsController::*)(ByRef<int32_t>, ByRef<int32_t>)>(&::GlobalNamespace::WindowResolutionSettingsController::GetInitValues)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x22ac288;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WindowResolutionSettingsController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WindowResolutionSettingsController*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WindowResolutionSettingsController.ApplyValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WindowResolutionSettingsController::*)(int32_t)>(&::GlobalNamespace::WindowResolutionSettingsController::ApplyValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x22ac49c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WindowResolutionSettingsController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WindowResolutionSettingsController*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WindowResolutionSettingsController.TextForValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::WindowResolutionSettingsController::*)(int32_t)>(&::GlobalNamespace::WindowResolutionSettingsController::TextForValue)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x22ac510;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WindowResolutionSettingsController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WindowResolutionSettingsController*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WindowResolutionSettingsController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WindowResolutionSettingsController::*)()>(&::GlobalNamespace::WindowResolutionSettingsController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ac5dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WindowResolutionSettingsController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::WindowResolutionSettingsController::__set__windowResolution(::GlobalNamespace::Vector2IntSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector2IntSO*, 0x28>(this, std::forward<::GlobalNamespace::Vector2IntSO*>(value));
}
constexpr ::GlobalNamespace::Vector2IntSO* GlobalNamespace::WindowResolutionSettingsController::__get__windowResolution()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector2IntSO*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector2IntSO*> GlobalNamespace::WindowResolutionSettingsController::__get__windowResolution() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector2IntSO*, 0x28>(this);
}
constexpr void GlobalNamespace::WindowResolutionSettingsController::__set__windowResolutions(::ArrayW<::UnityEngine::Vector2Int,::Array<::UnityEngine::Vector2Int>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector2Int,::Array<::UnityEngine::Vector2Int>*>, 0x30>(this, std::forward<::ArrayW<::UnityEngine::Vector2Int,::Array<::UnityEngine::Vector2Int>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector2Int,::Array<::UnityEngine::Vector2Int>*>& GlobalNamespace::WindowResolutionSettingsController::__get__windowResolutions()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector2Int,::Array<::UnityEngine::Vector2Int>*>, 0x30>(this);
}
constexpr ::ArrayW<::UnityEngine::Vector2Int,::Array<::UnityEngine::Vector2Int>*> const& GlobalNamespace::WindowResolutionSettingsController::__get__windowResolutions() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector2Int,::Array<::UnityEngine::Vector2Int>*>, 0x30>(this);
}
inline bool GlobalNamespace::WindowResolutionSettingsController::GetInitValues(ByRef<int32_t>  idx, ByRef<int32_t>  numberOfElements)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WindowResolutionSettingsController*>::get(),
                            "GetInitValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, idx, numberOfElements);
}
inline void GlobalNamespace::WindowResolutionSettingsController::ApplyValue(int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WindowResolutionSettingsController*>::get(),
                            "ApplyValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, idx);
}
inline ::StringW GlobalNamespace::WindowResolutionSettingsController::TextForValue(int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WindowResolutionSettingsController*>::get(),
                            "TextForValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, idx);
}
inline ::GlobalNamespace::WindowResolutionSettingsController* GlobalNamespace::WindowResolutionSettingsController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::WindowResolutionSettingsController*>());
}
inline void GlobalNamespace::WindowResolutionSettingsController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WindowResolutionSettingsController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
