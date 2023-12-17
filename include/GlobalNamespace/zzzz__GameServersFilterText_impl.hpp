#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameServersFilterText_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "HMUI/zzzz__CurvedTextMeshPro_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModel_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "GlobalNamespace/zzzz__GameServersFilter_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameServersFilterText.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServersFilterText::*)(::GlobalNamespace::GameServersFilter*, bool)>(&::GlobalNamespace::GameServersFilterText::Setup)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x22e1ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServersFilterText*>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameServersFilter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServersFilterText.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServersFilterText::*)(::GlobalNamespace::BeatmapDifficultyMask, ::GlobalNamespace::SongPackMask, bool)>(&::GlobalNamespace::GameServersFilterText::Setup)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x22ce74c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServersFilterText*>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServersFilterText._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServersFilterText::*)()>(&::GlobalNamespace::GameServersFilterText::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22e213c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServersFilterText*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GameServersFilterText::__set__text(::HMUI::CurvedTextMeshPro*  value)  {
::cordl_internals::setInstanceField<::HMUI::CurvedTextMeshPro*, 0x18>(this, std::forward<::HMUI::CurvedTextMeshPro*>(value));
}
constexpr ::HMUI::CurvedTextMeshPro* GlobalNamespace::GameServersFilterText::__get__text()  {
return ::cordl_internals::getInstanceField<::HMUI::CurvedTextMeshPro*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedTextMeshPro*> GlobalNamespace::GameServersFilterText::__get__text() const {
return ::cordl_internals::getInstanceField<::HMUI::CurvedTextMeshPro*, 0x18>(this);
}
constexpr void GlobalNamespace::GameServersFilterText::__set__songPackMasksModel(::GlobalNamespace::SongPackMasksModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SongPackMasksModel*, 0x20>(this, std::forward<::GlobalNamespace::SongPackMasksModel*>(value));
}
constexpr ::GlobalNamespace::SongPackMasksModel* GlobalNamespace::GameServersFilterText::__get__songPackMasksModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongPackMasksModel*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPackMasksModel*> GlobalNamespace::GameServersFilterText::__get__songPackMasksModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongPackMasksModel*, 0x20>(this);
}
constexpr void GlobalNamespace::GameServersFilterText::__set__stringBuilder(::System::Text::StringBuilder*  value)  {
::cordl_internals::setInstanceField<::System::Text::StringBuilder*, 0x28>(this, std::forward<::System::Text::StringBuilder*>(value));
}
constexpr ::System::Text::StringBuilder* GlobalNamespace::GameServersFilterText::__get__stringBuilder()  {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> GlobalNamespace::GameServersFilterText::__get__stringBuilder() const {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x28>(this);
}
inline void GlobalNamespace::GameServersFilterText::Setup(::GlobalNamespace::GameServersFilter*  filter, bool  visible)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServersFilterText*>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameServersFilter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, filter, visible);
}
inline void GlobalNamespace::GameServersFilterText::Setup(::GlobalNamespace::BeatmapDifficultyMask  beatmapDifficultyMask, ::GlobalNamespace::SongPackMask  songPackMask, bool  visible)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServersFilterText*>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapDifficultyMask, songPackMask, visible);
}
inline ::GlobalNamespace::GameServersFilterText* GlobalNamespace::GameServersFilterText::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameServersFilterText*>());
}
inline void GlobalNamespace::GameServersFilterText::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServersFilterText*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
