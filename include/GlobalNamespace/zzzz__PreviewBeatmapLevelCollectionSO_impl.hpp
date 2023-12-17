#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PreviewBeatmapLevelCollectionSO_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__PreviewBeatmapLevelSO_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelCollection_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelCollectionSO.get_beatmapLevels
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* (::GlobalNamespace::PreviewBeatmapLevelCollectionSO::*)()>(&::GlobalNamespace::PreviewBeatmapLevelCollectionSO::get_beatmapLevels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234ba98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelCollectionSO*>::get(),
                            "get_beatmapLevels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelCollectionSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PreviewBeatmapLevelCollectionSO::*)()>(&::GlobalNamespace::PreviewBeatmapLevelCollectionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234baa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelCollectionSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelCollection"
constexpr  GlobalNamespace::PreviewBeatmapLevelCollectionSO::operator ::GlobalNamespace::IBeatmapLevelCollection*() noexcept {
return static_cast<::GlobalNamespace::IBeatmapLevelCollection*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::PreviewBeatmapLevelCollectionSO::__set__beatmapLevels(::ArrayW<::GlobalNamespace::PreviewBeatmapLevelSO*,::Array<::GlobalNamespace::PreviewBeatmapLevelSO*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::PreviewBeatmapLevelSO*,::Array<::GlobalNamespace::PreviewBeatmapLevelSO*>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::PreviewBeatmapLevelSO*,::Array<::GlobalNamespace::PreviewBeatmapLevelSO*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::PreviewBeatmapLevelSO*,::Array<::GlobalNamespace::PreviewBeatmapLevelSO*>*>& GlobalNamespace::PreviewBeatmapLevelCollectionSO::__get__beatmapLevels()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::PreviewBeatmapLevelSO*,::Array<::GlobalNamespace::PreviewBeatmapLevelSO*>*>, 0x18>(this);
}
constexpr ::ArrayW<::GlobalNamespace::PreviewBeatmapLevelSO*,::Array<::GlobalNamespace::PreviewBeatmapLevelSO*>*> const& GlobalNamespace::PreviewBeatmapLevelCollectionSO::__get__beatmapLevels() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::PreviewBeatmapLevelSO*,::Array<::GlobalNamespace::PreviewBeatmapLevelSO*>*>, 0x18>(this);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* GlobalNamespace::PreviewBeatmapLevelCollectionSO::get_beatmapLevels()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelCollectionSO*>::get(),
                            "get_beatmapLevels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::PreviewBeatmapLevelCollectionSO* GlobalNamespace::PreviewBeatmapLevelCollectionSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PreviewBeatmapLevelCollectionSO*>());
}
inline void GlobalNamespace::PreviewBeatmapLevelCollectionSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelCollectionSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
