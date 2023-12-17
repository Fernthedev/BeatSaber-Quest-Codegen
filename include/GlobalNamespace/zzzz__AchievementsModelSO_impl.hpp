#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AchievementsModelSO_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__IPlatformAchievementsHandler_def.hpp"
#include "GlobalNamespace/zzzz__AchievementsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__AchievementSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0::*)()>(&::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2232fa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0._UnlockAchievement_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0::*)(::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult)>(&::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0::_UnlockAchievement_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2233194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0*>::get(),
                            "<UnlockAchievement>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0::__set___4__this(::GlobalNamespace::AchievementsModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AchievementsModelSO*, 0x10>(this, std::forward<::GlobalNamespace::AchievementsModelSO*>(value));
}
constexpr ::GlobalNamespace::AchievementsModelSO* GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AchievementsModelSO*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementsModelSO*> GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AchievementsModelSO*, 0x10>(this);
}
constexpr void GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0::__set_achievementId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0::__get_achievementId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0::__get_achievementId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
inline ::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0* GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0*>());
}
inline void GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0::_UnlockAchievement_b__0(::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0*>::get(),
                            "<UnlockAchievement>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::GlobalNamespace::AchievementsModelSO.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AchievementsModelSO::*)()>(&::GlobalNamespace::AchievementsModelSO::Initialize)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2231cc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsModelSO*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AchievementsModelSO.UnlockAchievement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AchievementsModelSO::*)(::GlobalNamespace::AchievementSO*)>(&::GlobalNamespace::AchievementsModelSO::UnlockAchievement)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2232d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsModelSO*>::get(),
                            "UnlockAchievement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AchievementSO*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AchievementsModelSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AchievementsModelSO::*)()>(&::GlobalNamespace::AchievementsModelSO::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2233074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsModelSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AchievementsModelSO._Initialize_b__3_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AchievementsModelSO::*)(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult, ::ArrayW<::StringW,::Array<::StringW>*>)>(&::GlobalNamespace::AchievementsModelSO::_Initialize_b__3_0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22330f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsModelSO*>::get(),
                            "<Initialize>b__3_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::AchievementsModelSO::__set__platformAchievementsHandler(::GlobalNamespace::IPlatformAchievementsHandler*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPlatformAchievementsHandler*, 0x18>(this, std::forward<::GlobalNamespace::IPlatformAchievementsHandler*>(value));
}
constexpr ::GlobalNamespace::IPlatformAchievementsHandler* GlobalNamespace::AchievementsModelSO::__get__platformAchievementsHandler()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPlatformAchievementsHandler*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPlatformAchievementsHandler*> GlobalNamespace::AchievementsModelSO::__get__platformAchievementsHandler() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPlatformAchievementsHandler*, 0x18>(this);
}
constexpr void GlobalNamespace::AchievementsModelSO::__set__unlockedAchievementIds(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<::StringW>*, 0x20>(this, std::forward<::System::Collections::Generic::HashSet_1<::StringW>*>(value));
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* GlobalNamespace::AchievementsModelSO::__get__unlockedAchievementIds()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::StringW>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> GlobalNamespace::AchievementsModelSO::__get__unlockedAchievementIds() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::StringW>*, 0x20>(this);
}
constexpr void GlobalNamespace::AchievementsModelSO::__set__initialized(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::AchievementsModelSO::__get__initialized()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& GlobalNamespace::AchievementsModelSO::__get__initialized() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
inline void GlobalNamespace::AchievementsModelSO::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsModelSO*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::AchievementsModelSO::UnlockAchievement(::GlobalNamespace::AchievementSO*  achievement)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsModelSO*>::get(),
                            "UnlockAchievement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AchievementSO*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, achievement);
}
inline ::GlobalNamespace::AchievementsModelSO* GlobalNamespace::AchievementsModelSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AchievementsModelSO*>());
}
inline void GlobalNamespace::AchievementsModelSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsModelSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::AchievementsModelSO::_Initialize_b__3_0(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult  result, ::ArrayW<::StringW,::Array<::StringW>*>  achievementIds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsModelSO*>::get(),
                            "<Initialize>b__3_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result, achievementIds);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
