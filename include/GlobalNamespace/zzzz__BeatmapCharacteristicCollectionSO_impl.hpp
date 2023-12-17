#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollectionSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicCollectionSO.get_allBeatmapCharacteristics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapCharacteristicSO*>* (::GlobalNamespace::BeatmapCharacteristicCollectionSO::*)()>(&::GlobalNamespace::BeatmapCharacteristicCollectionSO::get_allBeatmapCharacteristics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x232d138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCharacteristicCollectionSO*>::get(),
                            "get_allBeatmapCharacteristics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicCollectionSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicCollectionSO::*)()>(&::GlobalNamespace::BeatmapCharacteristicCollectionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x232d140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCharacteristicCollectionSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BeatmapCharacteristicCollectionSO::__set__beatmapCharacteristics(::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*,::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*,::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*,::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*,::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>& GlobalNamespace::BeatmapCharacteristicCollectionSO::__get__beatmapCharacteristics()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*,::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>, 0x18>(this);
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*,::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> const& GlobalNamespace::BeatmapCharacteristicCollectionSO::__get__beatmapCharacteristics() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*,::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>, 0x18>(this);
}
inline ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapCharacteristicSO*>* GlobalNamespace::BeatmapCharacteristicCollectionSO::get_allBeatmapCharacteristics()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCharacteristicCollectionSO*>::get(),
                            "get_allBeatmapCharacteristics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapCharacteristicSO*>*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapCharacteristicCollectionSO* GlobalNamespace::BeatmapCharacteristicCollectionSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapCharacteristicCollectionSO*>());
}
inline void GlobalNamespace::BeatmapCharacteristicCollectionSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCharacteristicCollectionSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
