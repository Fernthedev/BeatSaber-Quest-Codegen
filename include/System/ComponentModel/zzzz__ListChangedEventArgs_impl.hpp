#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/ComponentModel/zzzz__ListChangedEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__ListChangedType_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ListChangedEventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ListChangedEventArgs::*)(::System::ComponentModel::ListChangedType, int32_t)>(&::System::ComponentModel::ListChangedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29114cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ListChangedEventArgs*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListChangedType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListChangedEventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ListChangedEventArgs::*)(::System::ComponentModel::ListChangedType, int32_t, int32_t)>(&::System::ComponentModel::ListChangedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x29114d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ListChangedEventArgs*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListChangedType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::ComponentModel::ListChangedEventArgs::__set__ListChangedType_k__BackingField(::System::ComponentModel::ListChangedType  value)  {
::cordl_internals::setInstanceField<::System::ComponentModel::ListChangedType, 0x10>(this, std::forward<::System::ComponentModel::ListChangedType>(value));
}
constexpr ::System::ComponentModel::ListChangedType& System::ComponentModel::ListChangedEventArgs::__get__ListChangedType_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::ComponentModel::ListChangedType, 0x10>(this);
}
constexpr ::System::ComponentModel::ListChangedType const& System::ComponentModel::ListChangedEventArgs::__get__ListChangedType_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::ComponentModel::ListChangedType, 0x10>(this);
}
constexpr void System::ComponentModel::ListChangedEventArgs::__set__NewIndex_k__BackingField(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::ComponentModel::ListChangedEventArgs::__get__NewIndex_k__BackingField()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& System::ComponentModel::ListChangedEventArgs::__get__NewIndex_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void System::ComponentModel::ListChangedEventArgs::__set__OldIndex_k__BackingField(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::ComponentModel::ListChangedEventArgs::__get__OldIndex_k__BackingField()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& System::ComponentModel::ListChangedEventArgs::__get__OldIndex_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
inline ::System::ComponentModel::ListChangedEventArgs* System::ComponentModel::ListChangedEventArgs::New_ctor(::System::ComponentModel::ListChangedType  listChangedType, int32_t  newIndex)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::ListChangedEventArgs*>(listChangedType, newIndex));
}
inline void System::ComponentModel::ListChangedEventArgs::_ctor(::System::ComponentModel::ListChangedType  listChangedType, int32_t  newIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ListChangedEventArgs*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListChangedType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, listChangedType, newIndex);
}
inline ::System::ComponentModel::ListChangedEventArgs* System::ComponentModel::ListChangedEventArgs::New_ctor(::System::ComponentModel::ListChangedType  listChangedType, int32_t  newIndex, int32_t  oldIndex)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::ListChangedEventArgs*>(listChangedType, newIndex, oldIndex));
}
inline void System::ComponentModel::ListChangedEventArgs::_ctor(::System::ComponentModel::ListChangedType  listChangedType, int32_t  newIndex, int32_t  oldIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ListChangedEventArgs*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListChangedType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, listChangedType, newIndex, oldIndex);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
