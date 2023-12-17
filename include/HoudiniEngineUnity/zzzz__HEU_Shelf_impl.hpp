#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Shelf_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ShelfToolData_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Shelf._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Shelf::*)()>(&::HoudiniEngineUnity::HEU_Shelf::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x21d06f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Shelf*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_Shelf::__set__shelfName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_Shelf::__get__shelfName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_Shelf::__get__shelfName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void HoudiniEngineUnity::HEU_Shelf::__set__shelfPath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_Shelf::__get__shelfPath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_Shelf::__get__shelfPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void HoudiniEngineUnity::HEU_Shelf::__set__defaultShelf(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_Shelf::__get__defaultShelf()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_Shelf::__get__defaultShelf() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void HoudiniEngineUnity::HEU_Shelf::__set__tools(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>*, 0x28>(this, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>* HoudiniEngineUnity::HEU_Shelf::__get__tools()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>*> HoudiniEngineUnity::HEU_Shelf::__get__tools() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>*, 0x28>(this);
}
inline ::HoudiniEngineUnity::HEU_Shelf* HoudiniEngineUnity::HEU_Shelf::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_Shelf*>());
}
inline void HoudiniEngineUnity::HEU_Shelf::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Shelf*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
