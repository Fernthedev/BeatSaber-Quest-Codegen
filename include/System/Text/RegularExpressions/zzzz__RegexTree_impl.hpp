#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexTree_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexOptions_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexNode_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexTree._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexTree::*)(::System::Text::RegularExpressions::RegexNode*, ::System::Collections::Hashtable*, ::ArrayW<int32_t,::Array<int32_t>*>, int32_t, ::System::Collections::Hashtable*, ::ArrayW<::StringW,::Array<::StringW>*>, ::System::Text::RegularExpressions::RegexOptions)>(&::System::Text::RegularExpressions::RegexTree::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x29645c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexTree*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexOptions>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Text::RegularExpressions::RegexTree::__set_Root(::System::Text::RegularExpressions::RegexNode*  value)  {
::cordl_internals::setInstanceField<::System::Text::RegularExpressions::RegexNode*, 0x10>(this, std::forward<::System::Text::RegularExpressions::RegexNode*>(value));
}
constexpr ::System::Text::RegularExpressions::RegexNode* System::Text::RegularExpressions::RegexTree::__get_Root()  {
return ::cordl_internals::getInstanceField<::System::Text::RegularExpressions::RegexNode*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexNode*> System::Text::RegularExpressions::RegexTree::__get_Root() const {
return ::cordl_internals::getInstanceField<::System::Text::RegularExpressions::RegexNode*, 0x10>(this);
}
constexpr void System::Text::RegularExpressions::RegexTree::__set_Caps(::System::Collections::Hashtable*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Hashtable*, 0x18>(this, std::forward<::System::Collections::Hashtable*>(value));
}
constexpr ::System::Collections::Hashtable* System::Text::RegularExpressions::RegexTree::__get_Caps()  {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> System::Text::RegularExpressions::RegexTree::__get_Caps() const {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable*, 0x18>(this);
}
constexpr void System::Text::RegularExpressions::RegexTree::__set_CapNumList(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Text::RegularExpressions::RegexTree::__get_CapNumList()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Text::RegularExpressions::RegexTree::__get_CapNumList() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this);
}
constexpr void System::Text::RegularExpressions::RegexTree::__set_CapTop(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Text::RegularExpressions::RegexTree::__get_CapTop()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& System::Text::RegularExpressions::RegexTree::__get_CapTop() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void System::Text::RegularExpressions::RegexTree::__set_CapNames(::System::Collections::Hashtable*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Hashtable*, 0x30>(this, std::forward<::System::Collections::Hashtable*>(value));
}
constexpr ::System::Collections::Hashtable* System::Text::RegularExpressions::RegexTree::__get_CapNames()  {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> System::Text::RegularExpressions::RegexTree::__get_CapNames() const {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable*, 0x30>(this);
}
constexpr void System::Text::RegularExpressions::RegexTree::__set_CapsList(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x38>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& System::Text::RegularExpressions::RegexTree::__get_CapsList()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x38>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& System::Text::RegularExpressions::RegexTree::__get_CapsList() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x38>(this);
}
constexpr void System::Text::RegularExpressions::RegexTree::__set_Options(::System::Text::RegularExpressions::RegexOptions  value)  {
::cordl_internals::setInstanceField<::System::Text::RegularExpressions::RegexOptions, 0x40>(this, std::forward<::System::Text::RegularExpressions::RegexOptions>(value));
}
constexpr ::System::Text::RegularExpressions::RegexOptions& System::Text::RegularExpressions::RegexTree::__get_Options()  {
return ::cordl_internals::getInstanceField<::System::Text::RegularExpressions::RegexOptions, 0x40>(this);
}
constexpr ::System::Text::RegularExpressions::RegexOptions const& System::Text::RegularExpressions::RegexTree::__get_Options() const {
return ::cordl_internals::getInstanceField<::System::Text::RegularExpressions::RegexOptions, 0x40>(this);
}
inline ::System::Text::RegularExpressions::RegexTree* System::Text::RegularExpressions::RegexTree::New_ctor(::System::Text::RegularExpressions::RegexNode*  root, ::System::Collections::Hashtable*  caps, ::ArrayW<int32_t,::Array<int32_t>*>  capNumList, int32_t  capTop, ::System::Collections::Hashtable*  capNames, ::ArrayW<::StringW,::Array<::StringW>*>  capsList, ::System::Text::RegularExpressions::RegexOptions  options)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Text::RegularExpressions::RegexTree*>(root, caps, capNumList, capTop, capNames, capsList, options));
}
inline void System::Text::RegularExpressions::RegexTree::_ctor(::System::Text::RegularExpressions::RegexNode*  root, ::System::Collections::Hashtable*  caps, ::ArrayW<int32_t,::Array<int32_t>*>  capNumList, int32_t  capTop, ::System::Collections::Hashtable*  capNames, ::ArrayW<::StringW,::Array<::StringW>*>  capsList, ::System::Text::RegularExpressions::RegexOptions  options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexTree*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, root, caps, capNumList, capTop, capNames, capsList, options);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
