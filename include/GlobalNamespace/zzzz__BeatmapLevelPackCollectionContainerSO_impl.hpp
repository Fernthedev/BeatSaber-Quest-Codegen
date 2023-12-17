#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackCollectionContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackCollectionSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelPackCollectionContainerSO.get_beatmapLevelPackCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelPackCollectionSO* (::GlobalNamespace::BeatmapLevelPackCollectionContainerSO::*)()>(&::GlobalNamespace::BeatmapLevelPackCollectionContainerSO::get_beatmapLevelPackCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23424d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelPackCollectionContainerSO*>::get(),
                            "get_beatmapLevelPackCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelPackCollectionContainerSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelPackCollectionContainerSO::*)()>(&::GlobalNamespace::BeatmapLevelPackCollectionContainerSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23424dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelPackCollectionContainerSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BeatmapLevelPackCollectionContainerSO::__set__beatmapLevelPackCollection(::GlobalNamespace::BeatmapLevelPackCollectionSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelPackCollectionSO*, 0x18>(this, std::forward<::GlobalNamespace::BeatmapLevelPackCollectionSO*>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelPackCollectionSO* GlobalNamespace::BeatmapLevelPackCollectionContainerSO::__get__beatmapLevelPackCollection()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelPackCollectionSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackCollectionSO*> GlobalNamespace::BeatmapLevelPackCollectionContainerSO::__get__beatmapLevelPackCollection() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelPackCollectionSO*, 0x18>(this);
}
inline ::GlobalNamespace::BeatmapLevelPackCollectionSO* GlobalNamespace::BeatmapLevelPackCollectionContainerSO::get_beatmapLevelPackCollection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelPackCollectionContainerSO*>::get(),
                            "get_beatmapLevelPackCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelPackCollectionSO*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelPackCollectionContainerSO* GlobalNamespace::BeatmapLevelPackCollectionContainerSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapLevelPackCollectionContainerSO*>());
}
inline void GlobalNamespace::BeatmapLevelPackCollectionContainerSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelPackCollectionContainerSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
