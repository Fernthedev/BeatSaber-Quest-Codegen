#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__EditorBrowsableAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/ComponentModel/zzzz__EditorBrowsableState_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::EditorBrowsableAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::EditorBrowsableAttribute::*)(::System::ComponentModel::EditorBrowsableState)>(&::System::ComponentModel::EditorBrowsableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2903914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EditorBrowsableAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EditorBrowsableState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EditorBrowsableAttribute.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::EditorBrowsableAttribute::*)(::System::Object*)>(&::System::ComponentModel::EditorBrowsableAttribute::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x290393c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EditorBrowsableAttribute*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EditorBrowsableAttribute*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EditorBrowsableAttribute.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::EditorBrowsableAttribute::*)()>(&::System::ComponentModel::EditorBrowsableAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29039c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EditorBrowsableAttribute*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EditorBrowsableAttribute*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
constexpr void System::ComponentModel::EditorBrowsableAttribute::__set_browsableState(::System::ComponentModel::EditorBrowsableState  value)  {
::cordl_internals::setInstanceField<::System::ComponentModel::EditorBrowsableState, 0x10>(this, std::forward<::System::ComponentModel::EditorBrowsableState>(value));
}
constexpr ::System::ComponentModel::EditorBrowsableState& System::ComponentModel::EditorBrowsableAttribute::__get_browsableState()  {
return ::cordl_internals::getInstanceField<::System::ComponentModel::EditorBrowsableState, 0x10>(this);
}
constexpr ::System::ComponentModel::EditorBrowsableState const& System::ComponentModel::EditorBrowsableAttribute::__get_browsableState() const {
return ::cordl_internals::getInstanceField<::System::ComponentModel::EditorBrowsableState, 0x10>(this);
}
inline ::System::ComponentModel::EditorBrowsableAttribute* System::ComponentModel::EditorBrowsableAttribute::New_ctor(::System::ComponentModel::EditorBrowsableState  state)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::EditorBrowsableAttribute*>(state));
}
inline void System::ComponentModel::EditorBrowsableAttribute::_ctor(::System::ComponentModel::EditorBrowsableState  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EditorBrowsableAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EditorBrowsableState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state);
}
inline bool System::ComponentModel::EditorBrowsableAttribute::Equals(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EditorBrowsableAttribute*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::EditorBrowsableAttribute::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EditorBrowsableAttribute*>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
