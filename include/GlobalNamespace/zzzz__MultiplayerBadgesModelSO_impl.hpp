#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgesModelSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataSO_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgesModelSO.get_positiveBadges
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerBadgeDataSO*>* (::GlobalNamespace::MultiplayerBadgesModelSO::*)()>(&::GlobalNamespace::MultiplayerBadgesModelSO::get_positiveBadges)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cf914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgesModelSO*>::get(),
                            "get_positiveBadges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgesModelSO.get_negativeBadges
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerBadgeDataSO*>* (::GlobalNamespace::MultiplayerBadgesModelSO::*)()>(&::GlobalNamespace::MultiplayerBadgesModelSO::get_negativeBadges)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cf91c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgesModelSO*>::get(),
                            "get_negativeBadges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgesModelSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerBadgesModelSO::*)()>(&::GlobalNamespace::MultiplayerBadgesModelSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cf924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgesModelSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerBadgesModelSO::__set__positiveBadges(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>* GlobalNamespace::MultiplayerBadgesModelSO::__get__positiveBadges()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*> GlobalNamespace::MultiplayerBadgesModelSO::__get__positiveBadges() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*, 0x18>(this);
}
constexpr void GlobalNamespace::MultiplayerBadgesModelSO::__set__negativeBadges(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>* GlobalNamespace::MultiplayerBadgesModelSO::__get__negativeBadges()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*> GlobalNamespace::MultiplayerBadgesModelSO::__get__negativeBadges() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*, 0x20>(this);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerBadgeDataSO*>* GlobalNamespace::MultiplayerBadgesModelSO::get_positiveBadges()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgesModelSO*>::get(),
                            "get_positiveBadges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerBadgeDataSO*>* GlobalNamespace::MultiplayerBadgesModelSO::get_negativeBadges()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgesModelSO*>::get(),
                            "get_negativeBadges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerBadgesModelSO* GlobalNamespace::MultiplayerBadgesModelSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerBadgesModelSO*>());
}
inline void GlobalNamespace::MultiplayerBadgesModelSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgesModelSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
