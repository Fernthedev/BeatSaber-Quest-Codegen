#pragma once
#include "GlobalNamespace/zzzz__ListSettingsController_impl.hpp"
#include "GlobalNamespace/zzzz__PresetsSettingsController_def.hpp"
#include "GlobalNamespace/zzzz__IntSO_def.hpp"
#include "GlobalNamespace/zzzz__NamedPresetsSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PresetsSettingsController.GetInitValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PresetsSettingsController::*)(ByRef<int32_t>, ByRef<int32_t>)>(&::GlobalNamespace::PresetsSettingsController::GetInitValues)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x22ab000;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetsSettingsController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetsSettingsController*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PresetsSettingsController.ApplyValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PresetsSettingsController::*)(int32_t)>(&::GlobalNamespace::PresetsSettingsController::ApplyValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22ab0d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetsSettingsController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetsSettingsController*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PresetsSettingsController.TextForValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PresetsSettingsController::*)(int32_t)>(&::GlobalNamespace::PresetsSettingsController::TextForValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22ab130;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetsSettingsController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetsSettingsController*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PresetsSettingsController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PresetsSettingsController::*)()>(&::GlobalNamespace::PresetsSettingsController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ab180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetsSettingsController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PresetsSettingsController::__set__settingsValue(::GlobalNamespace::IntSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IntSO*, 0x28>(this, std::forward<::GlobalNamespace::IntSO*>(value));
}
constexpr ::GlobalNamespace::IntSO* GlobalNamespace::PresetsSettingsController::__get__settingsValue()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> GlobalNamespace::PresetsSettingsController::__get__settingsValue() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO*, 0x28>(this);
}
constexpr void GlobalNamespace::PresetsSettingsController::__set__presets(::GlobalNamespace::NamedPresetsSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NamedPresetsSO*, 0x30>(this, std::forward<::GlobalNamespace::NamedPresetsSO*>(value));
}
constexpr ::GlobalNamespace::NamedPresetsSO* GlobalNamespace::PresetsSettingsController::__get__presets()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NamedPresetsSO*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NamedPresetsSO*> GlobalNamespace::PresetsSettingsController::__get__presets() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NamedPresetsSO*, 0x30>(this);
}
constexpr void GlobalNamespace::PresetsSettingsController::__set__limitNumberOfElements(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::PresetsSettingsController::__get__limitNumberOfElements()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& GlobalNamespace::PresetsSettingsController::__get__limitNumberOfElements() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void GlobalNamespace::PresetsSettingsController::__set__numberOfElementsLimit(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::PresetsSettingsController::__get__numberOfElementsLimit()  {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
constexpr int32_t const& GlobalNamespace::PresetsSettingsController::__get__numberOfElementsLimit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
inline bool GlobalNamespace::PresetsSettingsController::GetInitValues(ByRef<int32_t>  idx, ByRef<int32_t>  numberOfElements)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetsSettingsController*>::get(),
                            "GetInitValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, idx, numberOfElements);
}
inline void GlobalNamespace::PresetsSettingsController::ApplyValue(int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetsSettingsController*>::get(),
                            "ApplyValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, idx);
}
inline ::StringW GlobalNamespace::PresetsSettingsController::TextForValue(int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetsSettingsController*>::get(),
                            "TextForValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, idx);
}
inline ::GlobalNamespace::PresetsSettingsController* GlobalNamespace::PresetsSettingsController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PresetsSettingsController*>());
}
inline void GlobalNamespace::PresetsSettingsController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PresetsSettingsController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
