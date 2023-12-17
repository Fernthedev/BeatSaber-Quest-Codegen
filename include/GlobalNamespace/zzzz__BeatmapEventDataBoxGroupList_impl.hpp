#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroupList_def.hpp"
#include "GlobalNamespace/zzzz__SortedList_2_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroup_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConvertor_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroupProcessor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupList.NoDomainReloadInit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::BeatmapEventDataBoxGroupList::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x23396a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupList*>::get(),
                            "NoDomainReloadInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupList._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroupList::*)(int32_t, ::GlobalNamespace::BeatmapData*, ::GlobalNamespace::IBeatToTimeConvertor*)>(&::GlobalNamespace::BeatmapEventDataBoxGroupList::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2339718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupList*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConvertor*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupList.Insert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* (::GlobalNamespace::BeatmapEventDataBoxGroupList::*)(::GlobalNamespace::BeatmapEventDataBoxGroup*)>(&::GlobalNamespace::BeatmapEventDataBoxGroupList::Insert)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x233986c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupList*>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventDataBoxGroup*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupList.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroupList::*)(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*)>(&::GlobalNamespace::BeatmapEventDataBoxGroupList::Remove)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x2339c80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupList*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupList.SyncWithBeatmapData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroupList::*)()>(&::GlobalNamespace::BeatmapEventDataBoxGroupList::SyncWithBeatmapData)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x233a048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupList*>::get(),
                            "SyncWithBeatmapData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BeatmapEventDataBoxGroupList::__set_updateBeatmapDataOnInsert(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::BeatmapEventDataBoxGroupList::__get_updateBeatmapDataOnInsert()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::BeatmapEventDataBoxGroupList::__get_updateBeatmapDataOnInsert() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroupList::__set__beatmapEventDataBoxGroupProcessor(::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*, 0x18>(this, std::forward<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*>(value));
}
constexpr ::GlobalNamespace::BeatmapEventDataBoxGroupProcessor* GlobalNamespace::BeatmapEventDataBoxGroupList::__get__beatmapEventDataBoxGroupProcessor()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*> GlobalNamespace::BeatmapEventDataBoxGroupList::__get__beatmapEventDataBoxGroupProcessor() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*, 0x18>(this);
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroupList::__set__sortedList(::GlobalNamespace::SortedList_2<::GlobalNamespace::BeatmapEventDataBoxGroup*,::GlobalNamespace::BeatmapEventDataBoxGroup*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SortedList_2<::GlobalNamespace::BeatmapEventDataBoxGroup*,::GlobalNamespace::BeatmapEventDataBoxGroup*>*, 0x20>(this, std::forward<::GlobalNamespace::SortedList_2<::GlobalNamespace::BeatmapEventDataBoxGroup*,::GlobalNamespace::BeatmapEventDataBoxGroup*>*>(value));
}
constexpr ::GlobalNamespace::SortedList_2<::GlobalNamespace::BeatmapEventDataBoxGroup*,::GlobalNamespace::BeatmapEventDataBoxGroup*>* GlobalNamespace::BeatmapEventDataBoxGroupList::__get__sortedList()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SortedList_2<::GlobalNamespace::BeatmapEventDataBoxGroup*,::GlobalNamespace::BeatmapEventDataBoxGroup*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SortedList_2<::GlobalNamespace::BeatmapEventDataBoxGroup*,::GlobalNamespace::BeatmapEventDataBoxGroup*>*> GlobalNamespace::BeatmapEventDataBoxGroupList::__get__sortedList() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SortedList_2<::GlobalNamespace::BeatmapEventDataBoxGroup*,::GlobalNamespace::BeatmapEventDataBoxGroup*>*, 0x20>(this);
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroupList::__set__groupId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::BeatmapEventDataBoxGroupList::__get__groupId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& GlobalNamespace::BeatmapEventDataBoxGroupList::__get__groupId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroupList::__set__beatmapData(::GlobalNamespace::BeatmapData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapData*, 0x30>(this, std::forward<::GlobalNamespace::BeatmapData*>(value));
}
constexpr ::GlobalNamespace::BeatmapData* GlobalNamespace::BeatmapEventDataBoxGroupList::__get__beatmapData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapData*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapData*> GlobalNamespace::BeatmapEventDataBoxGroupList::__get__beatmapData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapData*, 0x30>(this);
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroupList::__set__beatToTimeConvertor(::GlobalNamespace::IBeatToTimeConvertor*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatToTimeConvertor*, 0x38>(this, std::forward<::GlobalNamespace::IBeatToTimeConvertor*>(value));
}
constexpr ::GlobalNamespace::IBeatToTimeConvertor* GlobalNamespace::BeatmapEventDataBoxGroupList::__get__beatToTimeConvertor()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatToTimeConvertor*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatToTimeConvertor*> GlobalNamespace::BeatmapEventDataBoxGroupList::__get__beatToTimeConvertor() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatToTimeConvertor*, 0x38>(this);
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroupList::__set__nonSyncedInsertsExist(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::BeatmapEventDataBoxGroupList::__get__nonSyncedInsertsExist()  {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr bool const& GlobalNamespace::BeatmapEventDataBoxGroupList::__get__nonSyncedInsertsExist() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
inline void GlobalNamespace::BeatmapEventDataBoxGroupList::setStaticF__usedBeatmapEventDataBoxes(::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*, "_usedBeatmapEventDataBoxes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupList*>::get>(std::forward<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* GlobalNamespace::BeatmapEventDataBoxGroupList::getStaticF__usedBeatmapEventDataBoxes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*, "_usedBeatmapEventDataBoxes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupList*>::get>();
}
inline void GlobalNamespace::BeatmapEventDataBoxGroupList::NoDomainReloadInit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupList*>::get(),
                            "NoDomainReloadInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::BeatmapEventDataBoxGroupList* GlobalNamespace::BeatmapEventDataBoxGroupList::New_ctor(int32_t  groupId, ::GlobalNamespace::BeatmapData*  beatmapData, ::GlobalNamespace::IBeatToTimeConvertor*  beatToTimeConvertor)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapEventDataBoxGroupList*>(groupId, beatmapData, beatToTimeConvertor));
}
inline void GlobalNamespace::BeatmapEventDataBoxGroupList::_ctor(int32_t  groupId, ::GlobalNamespace::BeatmapData*  beatmapData, ::GlobalNamespace::IBeatToTimeConvertor*  beatToTimeConvertor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupList*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConvertor*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, groupId, beatmapData, beatToTimeConvertor);
}
inline ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* GlobalNamespace::BeatmapEventDataBoxGroupList::Insert(::GlobalNamespace::BeatmapEventDataBoxGroup*  beatmapEventDataBoxGroup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupList*>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventDataBoxGroup*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*, false>(*this, ___internal_method, beatmapEventDataBoxGroup);
}
inline void GlobalNamespace::BeatmapEventDataBoxGroupList::Remove(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*  nodeToDelete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupList*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, nodeToDelete);
}
inline void GlobalNamespace::BeatmapEventDataBoxGroupList::SyncWithBeatmapData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupList*>::get(),
                            "SyncWithBeatmapData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
