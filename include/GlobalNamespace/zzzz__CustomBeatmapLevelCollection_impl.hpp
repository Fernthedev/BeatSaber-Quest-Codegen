#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CustomBeatmapLevelCollection_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__CustomPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelCollection_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomBeatmapLevelCollection.get_beatmapLevels
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* (::GlobalNamespace::CustomBeatmapLevelCollection::*)()>(&::GlobalNamespace::CustomBeatmapLevelCollection::get_beatmapLevels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2346a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevelCollection*>::get(),
                            "get_beatmapLevels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomBeatmapLevelCollection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomBeatmapLevelCollection::*)(::ArrayW<::GlobalNamespace::CustomPreviewBeatmapLevel*,::Array<::GlobalNamespace::CustomPreviewBeatmapLevel*>*>)>(&::GlobalNamespace::CustomBeatmapLevelCollection::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2346a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevelCollection*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::CustomPreviewBeatmapLevel*,::Array<::GlobalNamespace::CustomPreviewBeatmapLevel*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelCollection"
constexpr  GlobalNamespace::CustomBeatmapLevelCollection::operator ::GlobalNamespace::IBeatmapLevelCollection*() noexcept {
return static_cast<::GlobalNamespace::IBeatmapLevelCollection*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::CustomBeatmapLevelCollection::__set__customPreviewBeatmapLevels(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomPreviewBeatmapLevel*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomPreviewBeatmapLevel*>*, 0x10>(this, std::forward<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomPreviewBeatmapLevel*>*>(value));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomPreviewBeatmapLevel*>* GlobalNamespace::CustomBeatmapLevelCollection::__get__customPreviewBeatmapLevels()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomPreviewBeatmapLevel*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomPreviewBeatmapLevel*>*> GlobalNamespace::CustomBeatmapLevelCollection::__get__customPreviewBeatmapLevels() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomPreviewBeatmapLevel*>*, 0x10>(this);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* GlobalNamespace::CustomBeatmapLevelCollection::get_beatmapLevels()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevelCollection*>::get(),
                            "get_beatmapLevels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::CustomBeatmapLevelCollection* GlobalNamespace::CustomBeatmapLevelCollection::New_ctor(::ArrayW<::GlobalNamespace::CustomPreviewBeatmapLevel*,::Array<::GlobalNamespace::CustomPreviewBeatmapLevel*>*>  customPreviewBeatmapLevels)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CustomBeatmapLevelCollection*>(customPreviewBeatmapLevels));
}
inline void GlobalNamespace::CustomBeatmapLevelCollection::_ctor(::ArrayW<::GlobalNamespace::CustomPreviewBeatmapLevel*,::Array<::GlobalNamespace::CustomPreviewBeatmapLevel*>*>  customPreviewBeatmapLevels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevelCollection*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::CustomPreviewBeatmapLevel*,::Array<::GlobalNamespace::CustomPreviewBeatmapLevel*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, customPreviewBeatmapLevels);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
