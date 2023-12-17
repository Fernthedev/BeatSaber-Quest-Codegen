#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentKeywords_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnvironmentKeywords.get_environmentKeywords
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::StringW>* (::GlobalNamespace::EnvironmentKeywords::*)()>(&::GlobalNamespace::EnvironmentKeywords::get_environmentKeywords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22403a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentKeywords*>::get(),
                            "get_environmentKeywords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentKeywords._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentKeywords::*)(::System::Collections::Generic::IReadOnlyList_1<::StringW>*)>(&::GlobalNamespace::EnvironmentKeywords::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x22403ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentKeywords*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentKeywords.HasKeyword
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::EnvironmentKeywords::*)(::StringW)>(&::GlobalNamespace::EnvironmentKeywords::HasKeyword)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22404b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentKeywords*>::get(),
                            "HasKeyword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::EnvironmentKeywords::__set__environmentKeywords(::System::Collections::Generic::IReadOnlyList_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, 0x10>(this, std::forward<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>(value));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW>* GlobalNamespace::EnvironmentKeywords::__get__environmentKeywords()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> GlobalNamespace::EnvironmentKeywords::__get__environmentKeywords() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, 0x10>(this);
}
constexpr void GlobalNamespace::EnvironmentKeywords::__set__environmentKeywordsSet(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<::StringW>*, 0x18>(this, std::forward<::System::Collections::Generic::HashSet_1<::StringW>*>(value));
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* GlobalNamespace::EnvironmentKeywords::__get__environmentKeywordsSet()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::StringW>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> GlobalNamespace::EnvironmentKeywords::__get__environmentKeywordsSet() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::StringW>*, 0x18>(this);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* GlobalNamespace::EnvironmentKeywords::get_environmentKeywords()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentKeywords*>::get(),
                            "get_environmentKeywords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentKeywords* GlobalNamespace::EnvironmentKeywords::New_ctor(::System::Collections::Generic::IReadOnlyList_1<::StringW>*  environmentKeywords)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::EnvironmentKeywords*>(environmentKeywords));
}
inline void GlobalNamespace::EnvironmentKeywords::_ctor(::System::Collections::Generic::IReadOnlyList_1<::StringW>*  environmentKeywords)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentKeywords*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, environmentKeywords);
}
inline bool GlobalNamespace::EnvironmentKeywords::HasKeyword(::StringW  keyword)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentKeywords*>::get(),
                            "HasKeyword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, keyword);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
