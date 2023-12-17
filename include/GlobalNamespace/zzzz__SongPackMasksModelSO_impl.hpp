#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModelSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackCollectionSO_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModelItem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModelSO.get_defaultSongPackMaskItems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::StringW>* (::GlobalNamespace::SongPackMasksModelSO::*)()>(&::GlobalNamespace::SongPackMasksModelSO::get_defaultSongPackMaskItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236461c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModelSO*>::get(),
                            "get_defaultSongPackMaskItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModelSO.get_customSongPackMaskItems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::SongPackMasksModelItem*,::Array<::GlobalNamespace::SongPackMasksModelItem*>*> (::GlobalNamespace::SongPackMasksModelSO::*)()>(&::GlobalNamespace::SongPackMasksModelSO::get_customSongPackMaskItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2364624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModelSO*>::get(),
                            "get_customSongPackMaskItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModelSO.get_ostAndExtrasCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelPackCollectionSO* (::GlobalNamespace::SongPackMasksModelSO::*)()>(&::GlobalNamespace::SongPackMasksModelSO::get_ostAndExtrasCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236462c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModelSO*>::get(),
                            "get_ostAndExtrasCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModelSO.get_dlcCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelPackCollectionSO* (::GlobalNamespace::SongPackMasksModelSO::*)()>(&::GlobalNamespace::SongPackMasksModelSO::get_dlcCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2364634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModelSO*>::get(),
                            "get_dlcCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMasksModelSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPackMasksModelSO::*)()>(&::GlobalNamespace::SongPackMasksModelSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236463c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModelSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SongPackMasksModelSO::__set__defaultSongPackMaskItems(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::SongPackMasksModelSO::__get__defaultSongPackMaskItems()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> GlobalNamespace::SongPackMasksModelSO::__get__defaultSongPackMaskItems() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x18>(this);
}
constexpr void GlobalNamespace::SongPackMasksModelSO::__set__customSongPackMaskItems(::ArrayW<::GlobalNamespace::SongPackMasksModelItem*,::Array<::GlobalNamespace::SongPackMasksModelItem*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::SongPackMasksModelItem*,::Array<::GlobalNamespace::SongPackMasksModelItem*>*>, 0x20>(this, std::forward<::ArrayW<::GlobalNamespace::SongPackMasksModelItem*,::Array<::GlobalNamespace::SongPackMasksModelItem*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::SongPackMasksModelItem*,::Array<::GlobalNamespace::SongPackMasksModelItem*>*>& GlobalNamespace::SongPackMasksModelSO::__get__customSongPackMaskItems()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::SongPackMasksModelItem*,::Array<::GlobalNamespace::SongPackMasksModelItem*>*>, 0x20>(this);
}
constexpr ::ArrayW<::GlobalNamespace::SongPackMasksModelItem*,::Array<::GlobalNamespace::SongPackMasksModelItem*>*> const& GlobalNamespace::SongPackMasksModelSO::__get__customSongPackMaskItems() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::SongPackMasksModelItem*,::Array<::GlobalNamespace::SongPackMasksModelItem*>*>, 0x20>(this);
}
constexpr void GlobalNamespace::SongPackMasksModelSO::__set__ostAndExtrasCollection(::GlobalNamespace::BeatmapLevelPackCollectionSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelPackCollectionSO*, 0x28>(this, std::forward<::GlobalNamespace::BeatmapLevelPackCollectionSO*>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelPackCollectionSO* GlobalNamespace::SongPackMasksModelSO::__get__ostAndExtrasCollection()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelPackCollectionSO*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackCollectionSO*> GlobalNamespace::SongPackMasksModelSO::__get__ostAndExtrasCollection() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelPackCollectionSO*, 0x28>(this);
}
constexpr void GlobalNamespace::SongPackMasksModelSO::__set__dlcCollection(::GlobalNamespace::BeatmapLevelPackCollectionSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelPackCollectionSO*, 0x30>(this, std::forward<::GlobalNamespace::BeatmapLevelPackCollectionSO*>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelPackCollectionSO* GlobalNamespace::SongPackMasksModelSO::__get__dlcCollection()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelPackCollectionSO*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackCollectionSO*> GlobalNamespace::SongPackMasksModelSO::__get__dlcCollection() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelPackCollectionSO*, 0x30>(this);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* GlobalNamespace::SongPackMasksModelSO::get_defaultSongPackMaskItems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModelSO*>::get(),
                            "get_defaultSongPackMaskItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, false>(*this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::SongPackMasksModelItem*,::Array<::GlobalNamespace::SongPackMasksModelItem*>*> GlobalNamespace::SongPackMasksModelSO::get_customSongPackMaskItems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModelSO*>::get(),
                            "get_customSongPackMaskItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::SongPackMasksModelItem*,::Array<::GlobalNamespace::SongPackMasksModelItem*>*>, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelPackCollectionSO* GlobalNamespace::SongPackMasksModelSO::get_ostAndExtrasCollection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModelSO*>::get(),
                            "get_ostAndExtrasCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelPackCollectionSO*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelPackCollectionSO* GlobalNamespace::SongPackMasksModelSO::get_dlcCollection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModelSO*>::get(),
                            "get_dlcCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelPackCollectionSO*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::SongPackMasksModelSO* GlobalNamespace::SongPackMasksModelSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SongPackMasksModelSO*>());
}
inline void GlobalNamespace::SongPackMasksModelSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMasksModelSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
