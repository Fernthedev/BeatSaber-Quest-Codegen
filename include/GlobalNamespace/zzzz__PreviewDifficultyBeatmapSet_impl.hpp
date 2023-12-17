#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PreviewDifficultyBeatmapSet_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PreviewDifficultyBeatmapSet.get_beatmapCharacteristic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapCharacteristicSO* (::GlobalNamespace::PreviewDifficultyBeatmapSet::*)()>(&::GlobalNamespace::PreviewDifficultyBeatmapSet::get_beatmapCharacteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234c5e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewDifficultyBeatmapSet*>::get(),
                            "get_beatmapCharacteristic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewDifficultyBeatmapSet.get_beatmapDifficulties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::BeatmapDifficulty,::Array<::GlobalNamespace::BeatmapDifficulty>*> (::GlobalNamespace::PreviewDifficultyBeatmapSet::*)()>(&::GlobalNamespace::PreviewDifficultyBeatmapSet::get_beatmapDifficulties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234c5e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewDifficultyBeatmapSet*>::get(),
                            "get_beatmapDifficulties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewDifficultyBeatmapSet._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PreviewDifficultyBeatmapSet::*)(::GlobalNamespace::BeatmapCharacteristicSO*, ::ArrayW<::GlobalNamespace::BeatmapDifficulty,::Array<::GlobalNamespace::BeatmapDifficulty>*>)>(&::GlobalNamespace::PreviewDifficultyBeatmapSet::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x234c5f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewDifficultyBeatmapSet*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapDifficulty,::Array<::GlobalNamespace::BeatmapDifficulty>*>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PreviewDifficultyBeatmapSet::__set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCharacteristicSO*, 0x10>(this, std::forward<::GlobalNamespace::BeatmapCharacteristicSO*>(value));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicSO* GlobalNamespace::PreviewDifficultyBeatmapSet::__get__beatmapCharacteristic()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicSO*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> GlobalNamespace::PreviewDifficultyBeatmapSet::__get__beatmapCharacteristic() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicSO*, 0x10>(this);
}
constexpr void GlobalNamespace::PreviewDifficultyBeatmapSet::__set__beatmapDifficulties(::ArrayW<::GlobalNamespace::BeatmapDifficulty,::Array<::GlobalNamespace::BeatmapDifficulty>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::BeatmapDifficulty,::Array<::GlobalNamespace::BeatmapDifficulty>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::BeatmapDifficulty,::Array<::GlobalNamespace::BeatmapDifficulty>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapDifficulty,::Array<::GlobalNamespace::BeatmapDifficulty>*>& GlobalNamespace::PreviewDifficultyBeatmapSet::__get__beatmapDifficulties()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::BeatmapDifficulty,::Array<::GlobalNamespace::BeatmapDifficulty>*>, 0x18>(this);
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapDifficulty,::Array<::GlobalNamespace::BeatmapDifficulty>*> const& GlobalNamespace::PreviewDifficultyBeatmapSet::__get__beatmapDifficulties() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::BeatmapDifficulty,::Array<::GlobalNamespace::BeatmapDifficulty>*>, 0x18>(this);
}
inline ::GlobalNamespace::BeatmapCharacteristicSO* GlobalNamespace::PreviewDifficultyBeatmapSet::get_beatmapCharacteristic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewDifficultyBeatmapSet*>::get(),
                            "get_beatmapCharacteristic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapCharacteristicSO*, false>(*this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::BeatmapDifficulty,::Array<::GlobalNamespace::BeatmapDifficulty>*> GlobalNamespace::PreviewDifficultyBeatmapSet::get_beatmapDifficulties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewDifficultyBeatmapSet*>::get(),
                            "get_beatmapDifficulties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::BeatmapDifficulty,::Array<::GlobalNamespace::BeatmapDifficulty>*>, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::PreviewDifficultyBeatmapSet* GlobalNamespace::PreviewDifficultyBeatmapSet::New_ctor(::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic, ::ArrayW<::GlobalNamespace::BeatmapDifficulty,::Array<::GlobalNamespace::BeatmapDifficulty>*>  beatmapDifficulties)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PreviewDifficultyBeatmapSet*>(beatmapCharacteristic, beatmapDifficulties));
}
inline void GlobalNamespace::PreviewDifficultyBeatmapSet::_ctor(::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic, ::ArrayW<::GlobalNamespace::BeatmapDifficulty,::Array<::GlobalNamespace::BeatmapDifficulty>*>  beatmapDifficulties)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewDifficultyBeatmapSet*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapDifficulty,::Array<::GlobalNamespace::BeatmapDifficulty>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapCharacteristic, beatmapDifficulties);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
