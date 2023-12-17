#pragma once
#include "System/Text/RegularExpressions/zzzz__Match_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__MatchSparse_def.hpp"
#include "System/Text/RegularExpressions/zzzz__GroupCollection_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::MatchSparse._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::MatchSparse::*)(::System::Text::RegularExpressions::Regex*, ::System::Collections::Hashtable*, int32_t, ::StringW, int32_t, int32_t, int32_t)>(&::System::Text::RegularExpressions::MatchSparse::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2950744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::MatchSparse*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::Regex*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::MatchSparse.get_Groups
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::GroupCollection* (::System::Text::RegularExpressions::MatchSparse::*)()>(&::System::Text::RegularExpressions::MatchSparse::get_Groups)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x29507f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::MatchSparse*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::MatchSparse*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void System::Text::RegularExpressions::MatchSparse::__set__caps(::System::Collections::Hashtable*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Hashtable*, 0x78>(this, std::forward<::System::Collections::Hashtable*>(value));
}
constexpr ::System::Collections::Hashtable* System::Text::RegularExpressions::MatchSparse::__get__caps()  {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> System::Text::RegularExpressions::MatchSparse::__get__caps() const {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable*, 0x78>(this);
}
inline ::System::Text::RegularExpressions::MatchSparse* System::Text::RegularExpressions::MatchSparse::New_ctor(::System::Text::RegularExpressions::Regex*  regex, ::System::Collections::Hashtable*  caps, int32_t  capcount, ::StringW  text, int32_t  begpos, int32_t  len, int32_t  startpos)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Text::RegularExpressions::MatchSparse*>(regex, caps, capcount, text, begpos, len, startpos));
}
inline void System::Text::RegularExpressions::MatchSparse::_ctor(::System::Text::RegularExpressions::Regex*  regex, ::System::Collections::Hashtable*  caps, int32_t  capcount, ::StringW  text, int32_t  begpos, int32_t  len, int32_t  startpos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::MatchSparse*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::Regex*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, regex, caps, capcount, text, begpos, len, startpos);
}
inline ::System::Text::RegularExpressions::GroupCollection* System::Text::RegularExpressions::MatchSparse::get_Groups()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::MatchSparse*>::get(),
                            "get_Groups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::GroupCollection*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
