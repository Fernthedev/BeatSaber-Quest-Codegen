#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLineData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapLineData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLineData.get_beatmapObjectsData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapObjectData*>* (::GlobalNamespace::BeatmapLineData::*)()>(&::GlobalNamespace::BeatmapLineData::get_beatmapObjectsData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe00534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLineData*>::get(),
                            "get_beatmapObjectsData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLineData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLineData::*)(int32_t)>(&::GlobalNamespace::BeatmapLineData::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xe0053c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLineData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLineData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLineData::*)(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectData*>*)>(&::GlobalNamespace::BeatmapLineData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe005cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLineData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectData*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLineData.AddBeatmapObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLineData::*)(::GlobalNamespace::BeatmapObjectData*)>(&::GlobalNamespace::BeatmapLineData::AddBeatmapObjectData)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xe005f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLineData*>::get(),
                            "AddBeatmapObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectData*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IReadonlyBeatmapLineData"
constexpr  GlobalNamespace::BeatmapLineData::operator ::GlobalNamespace::IReadonlyBeatmapLineData*() noexcept {
return static_cast<::GlobalNamespace::IReadonlyBeatmapLineData*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::BeatmapLineData::__set__beatmapObjectsData(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectData*>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectData*>* GlobalNamespace::BeatmapLineData::__get__beatmapObjectsData()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectData*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectData*>*> GlobalNamespace::BeatmapLineData::__get__beatmapObjectsData() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectData*>*, 0x10>(this);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapObjectData*>* GlobalNamespace::BeatmapLineData::get_beatmapObjectsData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLineData*>::get(),
                            "get_beatmapObjectsData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapObjectData*>*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLineData* GlobalNamespace::BeatmapLineData::New_ctor(int32_t  initialCapacity)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapLineData*>(initialCapacity));
}
inline void GlobalNamespace::BeatmapLineData::_ctor(int32_t  initialCapacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLineData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, initialCapacity);
}
inline ::GlobalNamespace::BeatmapLineData* GlobalNamespace::BeatmapLineData::New_ctor(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectData*>*  beatmapObjectData)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapLineData*>(beatmapObjectData));
}
inline void GlobalNamespace::BeatmapLineData::_ctor(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectData*>*  beatmapObjectData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLineData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectData*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapObjectData);
}
inline void GlobalNamespace::BeatmapLineData::AddBeatmapObjectData(::GlobalNamespace::BeatmapObjectData*  beatmapObjectData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLineData*>::get(),
                            "AddBeatmapObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapObjectData);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
