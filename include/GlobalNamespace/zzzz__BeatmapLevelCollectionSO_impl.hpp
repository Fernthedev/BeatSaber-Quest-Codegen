#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelCollectionSO_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelCollection_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelCollectionSO.get_beatmapLevels
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* (::GlobalNamespace::BeatmapLevelCollectionSO::*)()>(&::GlobalNamespace::BeatmapLevelCollectionSO::get_beatmapLevels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2342000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelCollectionSO*>::get(),
                            "get_beatmapLevels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelCollectionSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelCollectionSO::*)()>(&::GlobalNamespace::BeatmapLevelCollectionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2342008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelCollectionSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelCollection"
constexpr  GlobalNamespace::BeatmapLevelCollectionSO::operator ::GlobalNamespace::IBeatmapLevelCollection*() noexcept {
return static_cast<::GlobalNamespace::IBeatmapLevelCollection*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::BeatmapLevelCollectionSO::__set__beatmapLevels(::ArrayW<::GlobalNamespace::BeatmapLevelSO*,::Array<::GlobalNamespace::BeatmapLevelSO*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::BeatmapLevelSO*,::Array<::GlobalNamespace::BeatmapLevelSO*>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::BeatmapLevelSO*,::Array<::GlobalNamespace::BeatmapLevelSO*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelSO*,::Array<::GlobalNamespace::BeatmapLevelSO*>*>& GlobalNamespace::BeatmapLevelCollectionSO::__get__beatmapLevels()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::BeatmapLevelSO*,::Array<::GlobalNamespace::BeatmapLevelSO*>*>, 0x18>(this);
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelSO*,::Array<::GlobalNamespace::BeatmapLevelSO*>*> const& GlobalNamespace::BeatmapLevelCollectionSO::__get__beatmapLevels() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::BeatmapLevelSO*,::Array<::GlobalNamespace::BeatmapLevelSO*>*>, 0x18>(this);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* GlobalNamespace::BeatmapLevelCollectionSO::get_beatmapLevels()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelCollectionSO*>::get(),
                            "get_beatmapLevels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelCollectionSO* GlobalNamespace::BeatmapLevelCollectionSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapLevelCollectionSO*>());
}
inline void GlobalNamespace::BeatmapLevelCollectionSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelCollectionSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
