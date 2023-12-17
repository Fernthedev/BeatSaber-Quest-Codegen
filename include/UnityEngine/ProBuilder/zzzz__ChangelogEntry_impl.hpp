#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__ChangelogEntry_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SemVer_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::ChangelogEntry.get_versionInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::SemVer* (::UnityEngine::ProBuilder::ChangelogEntry::*)()>(&::UnityEngine::ProBuilder::ChangelogEntry::get_versionInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b3bc7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ChangelogEntry*>::get(),
                            "get_versionInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ChangelogEntry.get_releaseNotes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ProBuilder::ChangelogEntry::*)()>(&::UnityEngine::ProBuilder::ChangelogEntry::get_releaseNotes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b3bc84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ChangelogEntry*>::get(),
                            "get_releaseNotes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ChangelogEntry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::ChangelogEntry::*)(::UnityEngine::ProBuilder::SemVer*, ::StringW)>(&::UnityEngine::ProBuilder::ChangelogEntry::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2b3bc8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ChangelogEntry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::SemVer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ChangelogEntry.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ProBuilder::ChangelogEntry::*)()>(&::UnityEngine::ProBuilder::ChangelogEntry::ToString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b3bcb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ChangelogEntry*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ChangelogEntry*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ProBuilder::ChangelogEntry::__set_m_VersionInfo(::UnityEngine::ProBuilder::SemVer*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::SemVer*, 0x10>(this, std::forward<::UnityEngine::ProBuilder::SemVer*>(value));
}
constexpr ::UnityEngine::ProBuilder::SemVer* UnityEngine::ProBuilder::ChangelogEntry::__get_m_VersionInfo()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::SemVer*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::SemVer*> UnityEngine::ProBuilder::ChangelogEntry::__get_m_VersionInfo() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::SemVer*, 0x10>(this);
}
constexpr void UnityEngine::ProBuilder::ChangelogEntry::__set_m_ReleaseNotes(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::ProBuilder::ChangelogEntry::__get_m_ReleaseNotes()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& UnityEngine::ProBuilder::ChangelogEntry::__get_m_ReleaseNotes() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
inline ::UnityEngine::ProBuilder::SemVer* UnityEngine::ProBuilder::ChangelogEntry::get_versionInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ChangelogEntry*>::get(),
                            "get_versionInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::SemVer*, false>(*this, ___internal_method);
}
inline ::StringW UnityEngine::ProBuilder::ChangelogEntry::get_releaseNotes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ChangelogEntry*>::get(),
                            "get_releaseNotes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::ChangelogEntry* UnityEngine::ProBuilder::ChangelogEntry::New_ctor(::UnityEngine::ProBuilder::SemVer*  version, ::StringW  releaseNotes)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::ChangelogEntry*>(version, releaseNotes));
}
inline void UnityEngine::ProBuilder::ChangelogEntry::_ctor(::UnityEngine::ProBuilder::SemVer*  version, ::StringW  releaseNotes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ChangelogEntry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::SemVer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, version, releaseNotes);
}
inline ::StringW UnityEngine::ProBuilder::ChangelogEntry::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ChangelogEntry*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
