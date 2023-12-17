#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SonyLeaderboardIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__SonyLeaderboardIdsModelSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData.get_SonyLeaderboardId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData::*)()>(&::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData::get_SonyLeaderboardId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236981c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData*>::get(),
                            "get_SonyLeaderboardId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData.get_leaderboardId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData::*)()>(&::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData::get_leaderboardId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2369824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData*>::get(),
                            "get_leaderboardId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData::*)(uint32_t, ::StringW)>(&::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x236982c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData::__set__sonyLeaderboardId(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this, std::forward<uint32_t>(value));
}
constexpr uint32_t& GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData::__get__sonyLeaderboardId()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this);
}
constexpr uint32_t const& GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData::__get__sonyLeaderboardId() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData::__set__leaderboardId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData::__get__leaderboardId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData::__get__leaderboardId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
inline uint32_t GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData::get_SonyLeaderboardId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData*>::get(),
                            "get_SonyLeaderboardId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData::get_leaderboardId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData*>::get(),
                            "get_leaderboardId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData* GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData::New_ctor(uint32_t  sonyLeaderboardId, ::StringW  leaderboardId)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData*>(sonyLeaderboardId, leaderboardId));
}
inline void GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData::_ctor(uint32_t  sonyLeaderboardId, ::StringW  leaderboardId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sonyLeaderboardId, leaderboardId);
}
//  Writing Method size for method: ::GlobalNamespace::SonyLeaderboardIdsModelSO.get_leaderboardIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData*>* (::GlobalNamespace::SonyLeaderboardIdsModelSO::*)()>(&::GlobalNamespace::SonyLeaderboardIdsModelSO::get_leaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23695e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLeaderboardIdsModelSO*>::get(),
                            "get_leaderboardIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyLeaderboardIdsModelSO.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyLeaderboardIdsModelSO::*)()>(&::GlobalNamespace::SonyLeaderboardIdsModelSO::OnEnable)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x23695f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLeaderboardIdsModelSO*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLeaderboardIdsModelSO*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyLeaderboardIdsModelSO.GetSonyLeaderboardId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SonyLeaderboardIdsModelSO::*)(::GlobalNamespace::IDifficultyBeatmap*, ByRef<uint32_t>)>(&::GlobalNamespace::SonyLeaderboardIdsModelSO::GetSonyLeaderboardId)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x23697a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLeaderboardIdsModelSO*>::get(),
                            "GetSonyLeaderboardId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyLeaderboardIdsModelSO.DoesSupport360
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SonyLeaderboardIdsModelSO::*)()>(&::GlobalNamespace::SonyLeaderboardIdsModelSO::DoesSupport360)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLeaderboardIdsModelSO*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLeaderboardIdsModelSO*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyLeaderboardIdsModelSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyLeaderboardIdsModelSO::*)()>(&::GlobalNamespace::SonyLeaderboardIdsModelSO::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x23680d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLeaderboardIdsModelSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SonyLeaderboardIdsModelSO::__set__leaderboardIds(::System::Collections::Generic::List_1<::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData*>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData*>* GlobalNamespace::SonyLeaderboardIdsModelSO::__get__leaderboardIds()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData*>*> GlobalNamespace::SonyLeaderboardIdsModelSO::__get__leaderboardIds() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData*>*, 0x18>(this);
}
constexpr void GlobalNamespace::SonyLeaderboardIdsModelSO::__set__leaderboardIdToSonyId(::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*, 0x20>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>* GlobalNamespace::SonyLeaderboardIdsModelSO::__get__leaderboardIdToSonyId()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*> GlobalNamespace::SonyLeaderboardIdsModelSO::__get__leaderboardIdToSonyId() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*, 0x20>(this);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData*>* GlobalNamespace::SonyLeaderboardIdsModelSO::get_leaderboardIds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLeaderboardIdsModelSO*>::get(),
                            "get_leaderboardIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::__SonyLeaderboardIdsModelSO__LeaderboardIdData*>*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SonyLeaderboardIdsModelSO::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLeaderboardIdsModelSO*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::SonyLeaderboardIdsModelSO::GetSonyLeaderboardId(::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap, ByRef<uint32_t>  sonyLeaderboardId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLeaderboardIdsModelSO*>::get(),
                            "GetSonyLeaderboardId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, difficultyBeatmap, sonyLeaderboardId);
}
inline bool GlobalNamespace::SonyLeaderboardIdsModelSO::DoesSupport360()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLeaderboardIdsModelSO*>::get(),
                            "DoesSupport360",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::SonyLeaderboardIdsModelSO* GlobalNamespace::SonyLeaderboardIdsModelSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SonyLeaderboardIdsModelSO*>());
}
inline void GlobalNamespace::SonyLeaderboardIdsModelSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLeaderboardIdsModelSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
