#pragma once
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEditorGameplaySceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapEditorGameplaySceneSetupData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEditorGameplaySceneSetupData::*)(bool, bool, bool)>(&::GlobalNamespace::BeatmapEditorGameplaySceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x231c354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEditorGameplaySceneSetupData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__set_useFirstPersonFlyingController(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__get_useFirstPersonFlyingController()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__get_useFirstPersonFlyingController() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__set_recordVRMovement(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__get_recordVRMovement()  {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr bool const& GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__get_recordVRMovement() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr void GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__set_playVRMovement(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x12>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__get_playVRMovement()  {
return ::cordl_internals::getInstanceField<bool, 0x12>(this);
}
constexpr bool const& GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__get_playVRMovement() const {
return ::cordl_internals::getInstanceField<bool, 0x12>(this);
}
inline ::GlobalNamespace::BeatmapEditorGameplaySceneSetupData* GlobalNamespace::BeatmapEditorGameplaySceneSetupData::New_ctor(bool  useFirstPersonFlyingController, bool  recordVRMovement, bool  playVRMovement)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapEditorGameplaySceneSetupData*>(useFirstPersonFlyingController, recordVRMovement, playVRMovement));
}
inline void GlobalNamespace::BeatmapEditorGameplaySceneSetupData::_ctor(bool  useFirstPersonFlyingController, bool  recordVRMovement, bool  playVRMovement)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEditorGameplaySceneSetupData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, useFirstPersonFlyingController, recordVRMovement, playVRMovement);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
