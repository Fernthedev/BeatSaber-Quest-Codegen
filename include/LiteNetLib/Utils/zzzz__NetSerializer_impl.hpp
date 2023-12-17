#pragma once
#include "LiteNetLib/Utils/zzzz__NetSerializer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/Utils/zzzz__NetSerializer_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetSerializer_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCall_1<T>::__set_IsArray(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool& LiteNetLib::Utils::__NetSerializer__FastCall_1<T>::__get_IsArray()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool const& LiteNetLib::Utils::__NetSerializer__FastCall_1<T>::__get_IsArray() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__FastCall_1<T>::Init(::System::Reflection::MethodInfo*  getMethod, ::System::Reflection::MethodInfo*  setMethod, bool  isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, getMethod, setMethod, isArray);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__FastCall_1<T>::Read(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__FastCall_1<T>::Write(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__FastCall_1<T>::ReadArray(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__FastCall_1<T>::WriteArray(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>* LiteNetLib::Utils::__NetSerializer__FastCall_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__FastCall_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint64_t>::__set_Getter(::System::Func_2<TClass,uint64_t>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TClass,uint64_t>*, 0x18>(this, std::forward<::System::Func_2<TClass,uint64_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Func_2<TClass,uint64_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint64_t>::__get_Getter()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,uint64_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass,uint64_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint64_t>::__get_Getter() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,uint64_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint64_t>::__set_Setter(::System::Action_2<TClass,uint64_t>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TClass,uint64_t>*, 0x20>(this, std::forward<::System::Action_2<TClass,uint64_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Action_2<TClass,uint64_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint64_t>::__get_Setter()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,uint64_t>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass,uint64_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint64_t>::__get_Setter() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,uint64_t>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint64_t>::__set_GetterArr(::System::Func_2<TClass,::ArrayW<uint64_t,::Array<uint64_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TClass,::ArrayW<uint64_t,::Array<uint64_t>*>>*, 0x28>(this, std::forward<::System::Func_2<TClass,::ArrayW<uint64_t,::Array<uint64_t>*>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Func_2<TClass,::ArrayW<uint64_t,::Array<uint64_t>*>>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint64_t>::__get_GetterArr()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,::ArrayW<uint64_t,::Array<uint64_t>*>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass,::ArrayW<uint64_t,::Array<uint64_t>*>>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint64_t>::__get_GetterArr() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,::ArrayW<uint64_t,::Array<uint64_t>*>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint64_t>::__set_SetterArr(::System::Action_2<TClass,::ArrayW<uint64_t,::Array<uint64_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TClass,::ArrayW<uint64_t,::Array<uint64_t>*>>*, 0x30>(this, std::forward<::System::Action_2<TClass,::ArrayW<uint64_t,::Array<uint64_t>*>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Action_2<TClass,::ArrayW<uint64_t,::Array<uint64_t>*>>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint64_t>::__get_SetterArr()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,::ArrayW<uint64_t,::Array<uint64_t>*>>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass,::ArrayW<uint64_t,::Array<uint64_t>*>>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint64_t>::__get_SetterArr() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,::ArrayW<uint64_t,::Array<uint64_t>*>>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::ArrayW<uint64_t,::Array<uint64_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint64_t>::ReadArrayHelper(TClass  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint64_t>*>::get(),
                            "ReadArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint64_t,::Array<uint64_t>*>, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::ArrayW<uint64_t,::Array<uint64_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint64_t>::WriteArrayHelper(TClass  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint64_t>*>::get(),
                            "WriteArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint64_t,::Array<uint64_t>*>, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint64_t>::Init(::System::Reflection::MethodInfo*  getMethod, ::System::Reflection::MethodInfo*  setMethod, bool  isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint64_t>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, getMethod, setMethod, isArray);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint64_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint64_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint64_t>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint64_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint64_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint16_t>::__set_Getter(::System::Func_2<TClass,uint16_t>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TClass,uint16_t>*, 0x18>(this, std::forward<::System::Func_2<TClass,uint16_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Func_2<TClass,uint16_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint16_t>::__get_Getter()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,uint16_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass,uint16_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint16_t>::__get_Getter() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,uint16_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint16_t>::__set_Setter(::System::Action_2<TClass,uint16_t>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TClass,uint16_t>*, 0x20>(this, std::forward<::System::Action_2<TClass,uint16_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Action_2<TClass,uint16_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint16_t>::__get_Setter()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,uint16_t>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass,uint16_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint16_t>::__get_Setter() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,uint16_t>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint16_t>::__set_GetterArr(::System::Func_2<TClass,::ArrayW<uint16_t,::Array<uint16_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TClass,::ArrayW<uint16_t,::Array<uint16_t>*>>*, 0x28>(this, std::forward<::System::Func_2<TClass,::ArrayW<uint16_t,::Array<uint16_t>*>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Func_2<TClass,::ArrayW<uint16_t,::Array<uint16_t>*>>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint16_t>::__get_GetterArr()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,::ArrayW<uint16_t,::Array<uint16_t>*>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass,::ArrayW<uint16_t,::Array<uint16_t>*>>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint16_t>::__get_GetterArr() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,::ArrayW<uint16_t,::Array<uint16_t>*>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint16_t>::__set_SetterArr(::System::Action_2<TClass,::ArrayW<uint16_t,::Array<uint16_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TClass,::ArrayW<uint16_t,::Array<uint16_t>*>>*, 0x30>(this, std::forward<::System::Action_2<TClass,::ArrayW<uint16_t,::Array<uint16_t>*>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Action_2<TClass,::ArrayW<uint16_t,::Array<uint16_t>*>>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint16_t>::__get_SetterArr()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,::ArrayW<uint16_t,::Array<uint16_t>*>>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass,::ArrayW<uint16_t,::Array<uint16_t>*>>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint16_t>::__get_SetterArr() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,::ArrayW<uint16_t,::Array<uint16_t>*>>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::ArrayW<uint16_t,::Array<uint16_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint16_t>::ReadArrayHelper(TClass  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint16_t>*>::get(),
                            "ReadArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint16_t,::Array<uint16_t>*>, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::ArrayW<uint16_t,::Array<uint16_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint16_t>::WriteArrayHelper(TClass  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint16_t>*>::get(),
                            "WriteArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint16_t,::Array<uint16_t>*>, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint16_t>::Init(::System::Reflection::MethodInfo*  getMethod, ::System::Reflection::MethodInfo*  setMethod, bool  isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint16_t>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, getMethod, setMethod, isArray);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint16_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint16_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint16_t>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint16_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint16_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int8_t>::__set_Getter(::System::Func_2<TClass,int8_t>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TClass,int8_t>*, 0x18>(this, std::forward<::System::Func_2<TClass,int8_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Func_2<TClass,int8_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int8_t>::__get_Getter()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,int8_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass,int8_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int8_t>::__get_Getter() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,int8_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int8_t>::__set_Setter(::System::Action_2<TClass,int8_t>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TClass,int8_t>*, 0x20>(this, std::forward<::System::Action_2<TClass,int8_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Action_2<TClass,int8_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int8_t>::__get_Setter()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,int8_t>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass,int8_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int8_t>::__get_Setter() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,int8_t>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int8_t>::__set_GetterArr(::System::Func_2<TClass,::ArrayW<int8_t,::Array<int8_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TClass,::ArrayW<int8_t,::Array<int8_t>*>>*, 0x28>(this, std::forward<::System::Func_2<TClass,::ArrayW<int8_t,::Array<int8_t>*>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Func_2<TClass,::ArrayW<int8_t,::Array<int8_t>*>>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int8_t>::__get_GetterArr()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,::ArrayW<int8_t,::Array<int8_t>*>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass,::ArrayW<int8_t,::Array<int8_t>*>>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int8_t>::__get_GetterArr() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,::ArrayW<int8_t,::Array<int8_t>*>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int8_t>::__set_SetterArr(::System::Action_2<TClass,::ArrayW<int8_t,::Array<int8_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TClass,::ArrayW<int8_t,::Array<int8_t>*>>*, 0x30>(this, std::forward<::System::Action_2<TClass,::ArrayW<int8_t,::Array<int8_t>*>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Action_2<TClass,::ArrayW<int8_t,::Array<int8_t>*>>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int8_t>::__get_SetterArr()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,::ArrayW<int8_t,::Array<int8_t>*>>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass,::ArrayW<int8_t,::Array<int8_t>*>>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int8_t>::__get_SetterArr() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,::ArrayW<int8_t,::Array<int8_t>*>>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::ArrayW<int8_t,::Array<int8_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int8_t>::ReadArrayHelper(TClass  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int8_t>*>::get(),
                            "ReadArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int8_t,::Array<int8_t>*>, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::ArrayW<int8_t,::Array<int8_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int8_t>::WriteArrayHelper(TClass  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int8_t>*>::get(),
                            "WriteArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int8_t,::Array<int8_t>*>, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int8_t>::Init(::System::Reflection::MethodInfo*  getMethod, ::System::Reflection::MethodInfo*  setMethod, bool  isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int8_t>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, getMethod, setMethod, isArray);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int8_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int8_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int8_t>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int8_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int8_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int16_t>::__set_Getter(::System::Func_2<TClass,int16_t>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TClass,int16_t>*, 0x18>(this, std::forward<::System::Func_2<TClass,int16_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Func_2<TClass,int16_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int16_t>::__get_Getter()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,int16_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass,int16_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int16_t>::__get_Getter() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,int16_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int16_t>::__set_Setter(::System::Action_2<TClass,int16_t>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TClass,int16_t>*, 0x20>(this, std::forward<::System::Action_2<TClass,int16_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Action_2<TClass,int16_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int16_t>::__get_Setter()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,int16_t>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass,int16_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int16_t>::__get_Setter() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,int16_t>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int16_t>::__set_GetterArr(::System::Func_2<TClass,::ArrayW<int16_t,::Array<int16_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TClass,::ArrayW<int16_t,::Array<int16_t>*>>*, 0x28>(this, std::forward<::System::Func_2<TClass,::ArrayW<int16_t,::Array<int16_t>*>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Func_2<TClass,::ArrayW<int16_t,::Array<int16_t>*>>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int16_t>::__get_GetterArr()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,::ArrayW<int16_t,::Array<int16_t>*>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass,::ArrayW<int16_t,::Array<int16_t>*>>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int16_t>::__get_GetterArr() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,::ArrayW<int16_t,::Array<int16_t>*>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int16_t>::__set_SetterArr(::System::Action_2<TClass,::ArrayW<int16_t,::Array<int16_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TClass,::ArrayW<int16_t,::Array<int16_t>*>>*, 0x30>(this, std::forward<::System::Action_2<TClass,::ArrayW<int16_t,::Array<int16_t>*>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Action_2<TClass,::ArrayW<int16_t,::Array<int16_t>*>>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int16_t>::__get_SetterArr()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,::ArrayW<int16_t,::Array<int16_t>*>>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass,::ArrayW<int16_t,::Array<int16_t>*>>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int16_t>::__get_SetterArr() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,::ArrayW<int16_t,::Array<int16_t>*>>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::ArrayW<int16_t,::Array<int16_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int16_t>::ReadArrayHelper(TClass  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int16_t>*>::get(),
                            "ReadArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int16_t,::Array<int16_t>*>, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::ArrayW<int16_t,::Array<int16_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int16_t>::WriteArrayHelper(TClass  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int16_t>*>::get(),
                            "WriteArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int16_t,::Array<int16_t>*>, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int16_t>::Init(::System::Reflection::MethodInfo*  getMethod, ::System::Reflection::MethodInfo*  setMethod, bool  isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int16_t>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, getMethod, setMethod, isArray);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int16_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int16_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int16_t>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int16_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int16_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,double_t>::__set_Getter(::System::Func_2<TClass,double_t>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TClass,double_t>*, 0x18>(this, std::forward<::System::Func_2<TClass,double_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Func_2<TClass,double_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,double_t>::__get_Getter()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,double_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass,double_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,double_t>::__get_Getter() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,double_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,double_t>::__set_Setter(::System::Action_2<TClass,double_t>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TClass,double_t>*, 0x20>(this, std::forward<::System::Action_2<TClass,double_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Action_2<TClass,double_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,double_t>::__get_Setter()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,double_t>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass,double_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,double_t>::__get_Setter() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,double_t>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,double_t>::__set_GetterArr(::System::Func_2<TClass,::ArrayW<double_t,::Array<double_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TClass,::ArrayW<double_t,::Array<double_t>*>>*, 0x28>(this, std::forward<::System::Func_2<TClass,::ArrayW<double_t,::Array<double_t>*>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Func_2<TClass,::ArrayW<double_t,::Array<double_t>*>>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,double_t>::__get_GetterArr()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,::ArrayW<double_t,::Array<double_t>*>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass,::ArrayW<double_t,::Array<double_t>*>>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,double_t>::__get_GetterArr() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,::ArrayW<double_t,::Array<double_t>*>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,double_t>::__set_SetterArr(::System::Action_2<TClass,::ArrayW<double_t,::Array<double_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TClass,::ArrayW<double_t,::Array<double_t>*>>*, 0x30>(this, std::forward<::System::Action_2<TClass,::ArrayW<double_t,::Array<double_t>*>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Action_2<TClass,::ArrayW<double_t,::Array<double_t>*>>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,double_t>::__get_SetterArr()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,::ArrayW<double_t,::Array<double_t>*>>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass,::ArrayW<double_t,::Array<double_t>*>>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,double_t>::__get_SetterArr() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,::ArrayW<double_t,::Array<double_t>*>>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::ArrayW<double_t,::Array<double_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,double_t>::ReadArrayHelper(TClass  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,double_t>*>::get(),
                            "ReadArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<double_t,::Array<double_t>*>, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::ArrayW<double_t,::Array<double_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,double_t>::WriteArrayHelper(TClass  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,double_t>*>::get(),
                            "WriteArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<double_t,::Array<double_t>*>, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,double_t>::Init(::System::Reflection::MethodInfo*  getMethod, ::System::Reflection::MethodInfo*  setMethod, bool  isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,double_t>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, getMethod, setMethod, isArray);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,double_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,double_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,double_t>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,double_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,double_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,char16_t>::__set_Getter(::System::Func_2<TClass,char16_t>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TClass,char16_t>*, 0x18>(this, std::forward<::System::Func_2<TClass,char16_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Func_2<TClass,char16_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,char16_t>::__get_Getter()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,char16_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass,char16_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,char16_t>::__get_Getter() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,char16_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,char16_t>::__set_Setter(::System::Action_2<TClass,char16_t>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TClass,char16_t>*, 0x20>(this, std::forward<::System::Action_2<TClass,char16_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Action_2<TClass,char16_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,char16_t>::__get_Setter()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,char16_t>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass,char16_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,char16_t>::__get_Setter() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,char16_t>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,char16_t>::__set_GetterArr(::System::Func_2<TClass,::ArrayW<char16_t,::Array<char16_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TClass,::ArrayW<char16_t,::Array<char16_t>*>>*, 0x28>(this, std::forward<::System::Func_2<TClass,::ArrayW<char16_t,::Array<char16_t>*>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Func_2<TClass,::ArrayW<char16_t,::Array<char16_t>*>>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,char16_t>::__get_GetterArr()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,::ArrayW<char16_t,::Array<char16_t>*>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass,::ArrayW<char16_t,::Array<char16_t>*>>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,char16_t>::__get_GetterArr() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,::ArrayW<char16_t,::Array<char16_t>*>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,char16_t>::__set_SetterArr(::System::Action_2<TClass,::ArrayW<char16_t,::Array<char16_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TClass,::ArrayW<char16_t,::Array<char16_t>*>>*, 0x30>(this, std::forward<::System::Action_2<TClass,::ArrayW<char16_t,::Array<char16_t>*>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Action_2<TClass,::ArrayW<char16_t,::Array<char16_t>*>>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,char16_t>::__get_SetterArr()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,::ArrayW<char16_t,::Array<char16_t>*>>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass,::ArrayW<char16_t,::Array<char16_t>*>>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,char16_t>::__get_SetterArr() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,::ArrayW<char16_t,::Array<char16_t>*>>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::ArrayW<char16_t,::Array<char16_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,char16_t>::ReadArrayHelper(TClass  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,char16_t>*>::get(),
                            "ReadArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t,::Array<char16_t>*>, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::ArrayW<char16_t,::Array<char16_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,char16_t>::WriteArrayHelper(TClass  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,char16_t>*>::get(),
                            "WriteArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t,::Array<char16_t>*>, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,char16_t>::Init(::System::Reflection::MethodInfo*  getMethod, ::System::Reflection::MethodInfo*  setMethod, bool  isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,char16_t>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, getMethod, setMethod, isArray);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,char16_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,char16_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,char16_t>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,char16_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,char16_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint32_t>::__set_Getter(::System::Func_2<TClass,uint32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TClass,uint32_t>*, 0x18>(this, std::forward<::System::Func_2<TClass,uint32_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Func_2<TClass,uint32_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint32_t>::__get_Getter()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,uint32_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass,uint32_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint32_t>::__get_Getter() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,uint32_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint32_t>::__set_Setter(::System::Action_2<TClass,uint32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TClass,uint32_t>*, 0x20>(this, std::forward<::System::Action_2<TClass,uint32_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Action_2<TClass,uint32_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint32_t>::__get_Setter()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,uint32_t>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass,uint32_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint32_t>::__get_Setter() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,uint32_t>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint32_t>::__set_GetterArr(::System::Func_2<TClass,::ArrayW<uint32_t,::Array<uint32_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TClass,::ArrayW<uint32_t,::Array<uint32_t>*>>*, 0x28>(this, std::forward<::System::Func_2<TClass,::ArrayW<uint32_t,::Array<uint32_t>*>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Func_2<TClass,::ArrayW<uint32_t,::Array<uint32_t>*>>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint32_t>::__get_GetterArr()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,::ArrayW<uint32_t,::Array<uint32_t>*>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass,::ArrayW<uint32_t,::Array<uint32_t>*>>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint32_t>::__get_GetterArr() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,::ArrayW<uint32_t,::Array<uint32_t>*>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint32_t>::__set_SetterArr(::System::Action_2<TClass,::ArrayW<uint32_t,::Array<uint32_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TClass,::ArrayW<uint32_t,::Array<uint32_t>*>>*, 0x30>(this, std::forward<::System::Action_2<TClass,::ArrayW<uint32_t,::Array<uint32_t>*>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Action_2<TClass,::ArrayW<uint32_t,::Array<uint32_t>*>>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint32_t>::__get_SetterArr()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,::ArrayW<uint32_t,::Array<uint32_t>*>>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass,::ArrayW<uint32_t,::Array<uint32_t>*>>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint32_t>::__get_SetterArr() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,::ArrayW<uint32_t,::Array<uint32_t>*>>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::ArrayW<uint32_t,::Array<uint32_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint32_t>::ReadArrayHelper(TClass  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint32_t>*>::get(),
                            "ReadArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint32_t,::Array<uint32_t>*>, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::ArrayW<uint32_t,::Array<uint32_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint32_t>::WriteArrayHelper(TClass  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint32_t>*>::get(),
                            "WriteArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint32_t,::Array<uint32_t>*>, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint32_t>::Init(::System::Reflection::MethodInfo*  getMethod, ::System::Reflection::MethodInfo*  setMethod, bool  isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint32_t>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, getMethod, setMethod, isArray);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint32_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint32_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint32_t>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint32_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,float_t>::__set_Getter(::System::Func_2<TClass,float_t>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TClass,float_t>*, 0x18>(this, std::forward<::System::Func_2<TClass,float_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Func_2<TClass,float_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,float_t>::__get_Getter()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,float_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass,float_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,float_t>::__get_Getter() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,float_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,float_t>::__set_Setter(::System::Action_2<TClass,float_t>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TClass,float_t>*, 0x20>(this, std::forward<::System::Action_2<TClass,float_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Action_2<TClass,float_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,float_t>::__get_Setter()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,float_t>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass,float_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,float_t>::__get_Setter() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,float_t>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,float_t>::__set_GetterArr(::System::Func_2<TClass,::ArrayW<float_t,::Array<float_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TClass,::ArrayW<float_t,::Array<float_t>*>>*, 0x28>(this, std::forward<::System::Func_2<TClass,::ArrayW<float_t,::Array<float_t>*>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Func_2<TClass,::ArrayW<float_t,::Array<float_t>*>>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,float_t>::__get_GetterArr()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,::ArrayW<float_t,::Array<float_t>*>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass,::ArrayW<float_t,::Array<float_t>*>>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,float_t>::__get_GetterArr() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,::ArrayW<float_t,::Array<float_t>*>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,float_t>::__set_SetterArr(::System::Action_2<TClass,::ArrayW<float_t,::Array<float_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TClass,::ArrayW<float_t,::Array<float_t>*>>*, 0x30>(this, std::forward<::System::Action_2<TClass,::ArrayW<float_t,::Array<float_t>*>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Action_2<TClass,::ArrayW<float_t,::Array<float_t>*>>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,float_t>::__get_SetterArr()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,::ArrayW<float_t,::Array<float_t>*>>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass,::ArrayW<float_t,::Array<float_t>*>>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,float_t>::__get_SetterArr() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,::ArrayW<float_t,::Array<float_t>*>>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::ArrayW<float_t,::Array<float_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,float_t>::ReadArrayHelper(TClass  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,float_t>*>::get(),
                            "ReadArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t,::Array<float_t>*>, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::ArrayW<float_t,::Array<float_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,float_t>::WriteArrayHelper(TClass  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,float_t>*>::get(),
                            "WriteArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t,::Array<float_t>*>, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,float_t>::Init(::System::Reflection::MethodInfo*  getMethod, ::System::Reflection::MethodInfo*  setMethod, bool  isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,float_t>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, getMethod, setMethod, isArray);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,float_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,float_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,float_t>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,float_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,float_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int64_t>::__set_Getter(::System::Func_2<TClass,int64_t>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TClass,int64_t>*, 0x18>(this, std::forward<::System::Func_2<TClass,int64_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Func_2<TClass,int64_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int64_t>::__get_Getter()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,int64_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass,int64_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int64_t>::__get_Getter() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,int64_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int64_t>::__set_Setter(::System::Action_2<TClass,int64_t>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TClass,int64_t>*, 0x20>(this, std::forward<::System::Action_2<TClass,int64_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Action_2<TClass,int64_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int64_t>::__get_Setter()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,int64_t>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass,int64_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int64_t>::__get_Setter() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,int64_t>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int64_t>::__set_GetterArr(::System::Func_2<TClass,::ArrayW<int64_t,::Array<int64_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TClass,::ArrayW<int64_t,::Array<int64_t>*>>*, 0x28>(this, std::forward<::System::Func_2<TClass,::ArrayW<int64_t,::Array<int64_t>*>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Func_2<TClass,::ArrayW<int64_t,::Array<int64_t>*>>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int64_t>::__get_GetterArr()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,::ArrayW<int64_t,::Array<int64_t>*>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass,::ArrayW<int64_t,::Array<int64_t>*>>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int64_t>::__get_GetterArr() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,::ArrayW<int64_t,::Array<int64_t>*>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int64_t>::__set_SetterArr(::System::Action_2<TClass,::ArrayW<int64_t,::Array<int64_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TClass,::ArrayW<int64_t,::Array<int64_t>*>>*, 0x30>(this, std::forward<::System::Action_2<TClass,::ArrayW<int64_t,::Array<int64_t>*>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Action_2<TClass,::ArrayW<int64_t,::Array<int64_t>*>>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int64_t>::__get_SetterArr()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,::ArrayW<int64_t,::Array<int64_t>*>>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass,::ArrayW<int64_t,::Array<int64_t>*>>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int64_t>::__get_SetterArr() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,::ArrayW<int64_t,::Array<int64_t>*>>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::ArrayW<int64_t,::Array<int64_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int64_t>::ReadArrayHelper(TClass  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int64_t>*>::get(),
                            "ReadArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int64_t,::Array<int64_t>*>, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::ArrayW<int64_t,::Array<int64_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int64_t>::WriteArrayHelper(TClass  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int64_t>*>::get(),
                            "WriteArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int64_t,::Array<int64_t>*>, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int64_t>::Init(::System::Reflection::MethodInfo*  getMethod, ::System::Reflection::MethodInfo*  setMethod, bool  isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int64_t>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, getMethod, setMethod, isArray);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int64_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int64_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int64_t>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int64_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int64_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int32_t>::__set_Getter(::System::Func_2<TClass,int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TClass,int32_t>*, 0x18>(this, std::forward<::System::Func_2<TClass,int32_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Func_2<TClass,int32_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int32_t>::__get_Getter()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,int32_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass,int32_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int32_t>::__get_Getter() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,int32_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int32_t>::__set_Setter(::System::Action_2<TClass,int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TClass,int32_t>*, 0x20>(this, std::forward<::System::Action_2<TClass,int32_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Action_2<TClass,int32_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int32_t>::__get_Setter()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,int32_t>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass,int32_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int32_t>::__get_Setter() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,int32_t>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int32_t>::__set_GetterArr(::System::Func_2<TClass,::ArrayW<int32_t,::Array<int32_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TClass,::ArrayW<int32_t,::Array<int32_t>*>>*, 0x28>(this, std::forward<::System::Func_2<TClass,::ArrayW<int32_t,::Array<int32_t>*>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Func_2<TClass,::ArrayW<int32_t,::Array<int32_t>*>>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int32_t>::__get_GetterArr()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,::ArrayW<int32_t,::Array<int32_t>*>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass,::ArrayW<int32_t,::Array<int32_t>*>>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int32_t>::__get_GetterArr() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,::ArrayW<int32_t,::Array<int32_t>*>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int32_t>::__set_SetterArr(::System::Action_2<TClass,::ArrayW<int32_t,::Array<int32_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TClass,::ArrayW<int32_t,::Array<int32_t>*>>*, 0x30>(this, std::forward<::System::Action_2<TClass,::ArrayW<int32_t,::Array<int32_t>*>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Action_2<TClass,::ArrayW<int32_t,::Array<int32_t>*>>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int32_t>::__get_SetterArr()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,::ArrayW<int32_t,::Array<int32_t>*>>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass,::ArrayW<int32_t,::Array<int32_t>*>>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int32_t>::__get_SetterArr() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,::ArrayW<int32_t,::Array<int32_t>*>>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::ArrayW<int32_t,::Array<int32_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int32_t>::ReadArrayHelper(TClass  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int32_t>*>::get(),
                            "ReadArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t,::Array<int32_t>*>, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::ArrayW<int32_t,::Array<int32_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int32_t>::WriteArrayHelper(TClass  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int32_t>*>::get(),
                            "WriteArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t,::Array<int32_t>*>, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int32_t>::Init(::System::Reflection::MethodInfo*  getMethod, ::System::Reflection::MethodInfo*  setMethod, bool  isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int32_t>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, getMethod, setMethod, isArray);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int32_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int32_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int32_t>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int32_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint8_t>::__set_Getter(::System::Func_2<TClass,uint8_t>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TClass,uint8_t>*, 0x18>(this, std::forward<::System::Func_2<TClass,uint8_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Func_2<TClass,uint8_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint8_t>::__get_Getter()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,uint8_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass,uint8_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint8_t>::__get_Getter() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,uint8_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint8_t>::__set_Setter(::System::Action_2<TClass,uint8_t>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TClass,uint8_t>*, 0x20>(this, std::forward<::System::Action_2<TClass,uint8_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Action_2<TClass,uint8_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint8_t>::__get_Setter()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,uint8_t>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass,uint8_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint8_t>::__get_Setter() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,uint8_t>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint8_t>::__set_GetterArr(::System::Func_2<TClass,::ArrayW<uint8_t,::Array<uint8_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TClass,::ArrayW<uint8_t,::Array<uint8_t>*>>*, 0x28>(this, std::forward<::System::Func_2<TClass,::ArrayW<uint8_t,::Array<uint8_t>*>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Func_2<TClass,::ArrayW<uint8_t,::Array<uint8_t>*>>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint8_t>::__get_GetterArr()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,::ArrayW<uint8_t,::Array<uint8_t>*>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass,::ArrayW<uint8_t,::Array<uint8_t>*>>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint8_t>::__get_GetterArr() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,::ArrayW<uint8_t,::Array<uint8_t>*>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint8_t>::__set_SetterArr(::System::Action_2<TClass,::ArrayW<uint8_t,::Array<uint8_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TClass,::ArrayW<uint8_t,::Array<uint8_t>*>>*, 0x30>(this, std::forward<::System::Action_2<TClass,::ArrayW<uint8_t,::Array<uint8_t>*>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Action_2<TClass,::ArrayW<uint8_t,::Array<uint8_t>*>>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint8_t>::__get_SetterArr()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,::ArrayW<uint8_t,::Array<uint8_t>*>>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass,::ArrayW<uint8_t,::Array<uint8_t>*>>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint8_t>::__get_SetterArr() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,::ArrayW<uint8_t,::Array<uint8_t>*>>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::ArrayW<uint8_t,::Array<uint8_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint8_t>::ReadArrayHelper(TClass  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint8_t>*>::get(),
                            "ReadArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::ArrayW<uint8_t,::Array<uint8_t>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint8_t>::WriteArrayHelper(TClass  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint8_t>*>::get(),
                            "WriteArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint8_t>::Init(::System::Reflection::MethodInfo*  getMethod, ::System::Reflection::MethodInfo*  setMethod, bool  isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint8_t>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, getMethod, setMethod, isArray);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint8_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint8_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint8_t>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint8_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,uint8_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,bool>::__set_Getter(::System::Func_2<TClass,bool>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TClass,bool>*, 0x18>(this, std::forward<::System::Func_2<TClass,bool>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Func_2<TClass,bool>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,bool>::__get_Getter()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,bool>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass,bool>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,bool>::__get_Getter() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,bool>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,bool>::__set_Setter(::System::Action_2<TClass,bool>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TClass,bool>*, 0x20>(this, std::forward<::System::Action_2<TClass,bool>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Action_2<TClass,bool>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,bool>::__get_Setter()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,bool>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass,bool>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,bool>::__get_Setter() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,bool>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,bool>::__set_GetterArr(::System::Func_2<TClass,::ArrayW<bool,::Array<bool>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TClass,::ArrayW<bool,::Array<bool>*>>*, 0x28>(this, std::forward<::System::Func_2<TClass,::ArrayW<bool,::Array<bool>*>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Func_2<TClass,::ArrayW<bool,::Array<bool>*>>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,bool>::__get_GetterArr()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,::ArrayW<bool,::Array<bool>*>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass,::ArrayW<bool,::Array<bool>*>>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,bool>::__get_GetterArr() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,::ArrayW<bool,::Array<bool>*>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,bool>::__set_SetterArr(::System::Action_2<TClass,::ArrayW<bool,::Array<bool>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TClass,::ArrayW<bool,::Array<bool>*>>*, 0x30>(this, std::forward<::System::Action_2<TClass,::ArrayW<bool,::Array<bool>*>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::System::Action_2<TClass,::ArrayW<bool,::Array<bool>*>>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,bool>::__get_SetterArr()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,::ArrayW<bool,::Array<bool>*>>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass,::ArrayW<bool,::Array<bool>*>>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,bool>::__get_SetterArr() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,::ArrayW<bool,::Array<bool>*>>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::ArrayW<bool,::Array<bool>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,bool>::ReadArrayHelper(TClass  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,bool>*>::get(),
                            "ReadArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<bool,::Array<bool>*>, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::ArrayW<bool,::Array<bool>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,bool>::WriteArrayHelper(TClass  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,bool>*>::get(),
                            "WriteArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<bool,::Array<bool>*>, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,bool>::Init(::System::Reflection::MethodInfo*  getMethod, ::System::Reflection::MethodInfo*  setMethod, bool  isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,bool>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, getMethod, setMethod, isArray);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,bool>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,bool>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,bool>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,bool>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,bool>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_Getter(::System::Func_2<TClass,TProperty>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TClass,TProperty>*, 0x18>(this, std::forward<::System::Func_2<TClass,TProperty>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr ::System::Func_2<TClass,TProperty>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_Getter()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,TProperty>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass,TProperty>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_Getter() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,TProperty>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_Setter(::System::Action_2<TClass,TProperty>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TClass,TProperty>*, 0x20>(this, std::forward<::System::Action_2<TClass,TProperty>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr ::System::Action_2<TClass,TProperty>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_Setter()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,TProperty>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass,TProperty>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_Setter() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,TProperty>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_GetterArr(::System::Func_2<TClass,::ArrayW<TProperty,::Array<TProperty>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TClass,::ArrayW<TProperty,::Array<TProperty>*>>*, 0x28>(this, std::forward<::System::Func_2<TClass,::ArrayW<TProperty,::Array<TProperty>*>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr ::System::Func_2<TClass,::ArrayW<TProperty,::Array<TProperty>*>>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_GetterArr()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,::ArrayW<TProperty,::Array<TProperty>*>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TClass,::ArrayW<TProperty,::Array<TProperty>*>>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_GetterArr() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TClass,::ArrayW<TProperty,::Array<TProperty>*>>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__set_SetterArr(::System::Action_2<TClass,::ArrayW<TProperty,::Array<TProperty>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TClass,::ArrayW<TProperty,::Array<TProperty>*>>*, 0x30>(this, std::forward<::System::Action_2<TClass,::ArrayW<TProperty,::Array<TProperty>*>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr ::System::Action_2<TClass,::ArrayW<TProperty,::Array<TProperty>*>>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_SetterArr()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,::ArrayW<TProperty,::Array<TProperty>*>>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TClass,::ArrayW<TProperty,::Array<TProperty>*>>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,TProperty>::__get_SetterArr() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TClass,::ArrayW<TProperty,::Array<TProperty>*>>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
inline ::ArrayW<TProperty,::Array<TProperty>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,TProperty>::ReadArrayHelper(TClass  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,TProperty>*>::get(),
                            "ReadArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TProperty,::Array<TProperty>*>, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
inline ::ArrayW<TProperty,::Array<TProperty>*> LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,TProperty>::WriteArrayHelper(TClass  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,TProperty>*>::get(),
                            "WriteArrayHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TProperty,::Array<TProperty>*>, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,TProperty>::Init(::System::Reflection::MethodInfo*  getMethod, ::System::Reflection::MethodInfo*  setMethod, bool  isArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,TProperty>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, getMethod, setMethod, isArray);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
inline ::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,TProperty>* LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,TProperty>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,TProperty>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,TProperty>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecific_2<TClass,TProperty>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<typename TClass,typename TProperty>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass,TProperty>::__set__p(TProperty  value)  {
::cordl_internals::setInstanceField<TProperty, 0x38>(this, std::forward<TProperty>(value));
}
template<typename TClass,typename TProperty>
constexpr TProperty& LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass,TProperty>::__get__p()  {
return ::cordl_internals::getInstanceField<TProperty, 0x38>(this);
}
template<typename TClass,typename TProperty>
constexpr TProperty const& LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass,TProperty>::__get__p() const {
return ::cordl_internals::getInstanceField<TProperty, 0x38>(this);
}
template<typename TClass,typename TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass,TProperty>::Read(TClass  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass,TProperty>*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<typename TClass,typename TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass,TProperty>::Write(TClass  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass,TProperty>*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<typename TClass,typename TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass,TProperty>::ReadArray(TClass  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass,TProperty>*>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<typename TClass,typename TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass,TProperty>::WriteArray(TClass  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass,TProperty>*>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<typename TClass,typename TProperty>
inline ::LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass,TProperty>* LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass,TProperty>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass,TProperty>*>());
}
template<typename TClass,typename TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass,TProperty>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallStruct_2<TClass,TProperty>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::LiteNetLib::Utils::__NetSerializer__CustomType._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::__NetSerializer__CustomType::*)()>(&::LiteNetLib::Utils::__NetSerializer__CustomType::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220bccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__CustomType*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
template<typename T>
inline ::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>* LiteNetLib::Utils::__NetSerializer__CustomType::Get()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__CustomType*>::get(),
                        "Get",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*, false>(*this, ___internal_method);
}
inline ::LiteNetLib::Utils::__NetSerializer__CustomType* LiteNetLib::Utils::__NetSerializer__CustomType::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__CustomType*>());
}
inline void LiteNetLib::Utils::__NetSerializer__CustomType::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__CustomType*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<typename TProperty>
template<typename T>
inline ::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>* LiteNetLib::Utils::__NetSerializer__CustomTypeStruct_1<TProperty>::Get()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__CustomTypeStruct_1<TProperty>*>::get(),
                        "Get",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*, false>(*this, ___internal_method);
}
template<typename TProperty>
inline ::LiteNetLib::Utils::__NetSerializer__CustomTypeStruct_1<TProperty>* LiteNetLib::Utils::__NetSerializer__CustomTypeStruct_1<TProperty>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__CustomTypeStruct_1<TProperty>*>());
}
template<typename TProperty>
inline void LiteNetLib::Utils::__NetSerializer__CustomTypeStruct_1<TProperty>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__CustomTypeStruct_1<TProperty>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::LiteNetLib::Utils::NetSerializer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NetSerializer::*)()>(&::LiteNetLib::Utils::NetSerializer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220b7a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetSerializer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NetSerializer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NetSerializer::*)(int32_t)>(&::LiteNetLib::Utils::NetSerializer::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x220b898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetSerializer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void LiteNetLib::Utils::NetSerializer::__set__writer(::LiteNetLib::Utils::NetDataWriter*  value)  {
::cordl_internals::setInstanceField<::LiteNetLib::Utils::NetDataWriter*, 0x10>(this, std::forward<::LiteNetLib::Utils::NetDataWriter*>(value));
}
constexpr ::LiteNetLib::Utils::NetDataWriter* LiteNetLib::Utils::NetSerializer::__get__writer()  {
return ::cordl_internals::getInstanceField<::LiteNetLib::Utils::NetDataWriter*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> LiteNetLib::Utils::NetSerializer::__get__writer() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::Utils::NetDataWriter*, 0x10>(this);
}
constexpr void LiteNetLib::Utils::NetSerializer::__set__maxStringLength(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& LiteNetLib::Utils::NetSerializer::__get__maxStringLength()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& LiteNetLib::Utils::NetSerializer::__get__maxStringLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void LiteNetLib::Utils::NetSerializer::__set__registeredTypes(::System::Collections::Generic::Dictionary_2<::System::Type*,::LiteNetLib::Utils::__NetSerializer__CustomType*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::System::Type*,::LiteNetLib::Utils::__NetSerializer__CustomType*>*, 0x20>(this, std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::LiteNetLib::Utils::__NetSerializer__CustomType*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::LiteNetLib::Utils::__NetSerializer__CustomType*>* LiteNetLib::Utils::NetSerializer::__get__registeredTypes()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Type*,::LiteNetLib::Utils::__NetSerializer__CustomType*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*,::LiteNetLib::Utils::__NetSerializer__CustomType*>*> LiteNetLib::Utils::NetSerializer::__get__registeredTypes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Type*,::LiteNetLib::Utils::__NetSerializer__CustomType*>*, 0x20>(this);
}
template<typename T>
inline void LiteNetLib::Utils::NetSerializer::RegisterNestedType()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetSerializer*>::get(),
                        "RegisterNestedType",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<typename T>
inline void LiteNetLib::Utils::NetSerializer::RegisterNestedType(::System::Func_1<T>*  constructor)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetSerializer*>::get(),
                        "RegisterNestedType",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, constructor);
}
template<typename T>
inline void LiteNetLib::Utils::NetSerializer::RegisterNestedType(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*,T>*  writer, ::System::Func_2<::LiteNetLib::Utils::NetDataReader*,T>*  reader)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetSerializer*>::get(),
                        "RegisterNestedType",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::LiteNetLib::Utils::NetDataWriter*,T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::LiteNetLib::Utils::NetDataReader*,T>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer, reader);
}
inline ::LiteNetLib::Utils::NetSerializer* LiteNetLib::Utils::NetSerializer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::NetSerializer*>());
}
inline void LiteNetLib::Utils::NetSerializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetSerializer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::LiteNetLib::Utils::NetSerializer* LiteNetLib::Utils::NetSerializer::New_ctor(int32_t  maxStringLength)  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::NetSerializer*>(maxStringLength));
}
inline void LiteNetLib::Utils::NetSerializer::_ctor(int32_t  maxStringLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetSerializer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, maxStringLength);
}
template<typename T>
inline ::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>* LiteNetLib::Utils::NetSerializer::RegisterInternal()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetSerializer*>::get(),
                        "RegisterInternal",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>*, false>(*this, ___internal_method);
}
template<typename T>
inline void LiteNetLib::Utils::NetSerializer::Register()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetSerializer*>::get(),
                        "Register",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<typename T>
inline T LiteNetLib::Utils::NetSerializer::Deserialize(::LiteNetLib::Utils::NetDataReader*  reader)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetSerializer*>::get(),
                        "Deserialize",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method, reader);
}
template<typename T>
inline bool LiteNetLib::Utils::NetSerializer::Deserialize(::LiteNetLib::Utils::NetDataReader*  reader, T  target)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetSerializer*>::get(),
                        "Deserialize",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, reader, target);
}
template<typename T>
inline void LiteNetLib::Utils::NetSerializer::Serialize(::LiteNetLib::Utils::NetDataWriter*  writer, T  obj)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetSerializer*>::get(),
                        "Serialize",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer, obj);
}
template<typename T>
inline ::ArrayW<uint8_t,::Array<uint8_t>*> LiteNetLib::Utils::NetSerializer::Serialize(T  obj)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NetSerializer*>::get(),
                        "Serialize",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method, obj);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>::ElementRead(::LiteNetLib::Utils::NetDataReader*  r, ByRef<char16_t>  prop)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>*>::get(),
                            "ElementRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, r, prop);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>::ElementWrite(::LiteNetLib::Utils::NetDataWriter*  w, ByRef<char16_t>  prop)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>*>::get(),
                            "ElementWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, w, prop);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>::Read(TClass  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>::Write(TClass  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>::ReadArray(TClass  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>*>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>::WriteArray(TClass  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>*>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline ::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>* LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TClass>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,char16_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>::ElementRead(::LiteNetLib::Utils::NetDataReader*  r, ByRef<TProperty>  prop)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>*>::get(),
                            "ElementRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TProperty>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, r, prop);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>::ElementWrite(::LiteNetLib::Utils::NetDataWriter*  w, ByRef<TProperty>  prop)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>*>::get(),
                            "ElementWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TProperty>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, w, prop);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>::Read(TClass  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>::Write(TClass  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>::ReadArray(TClass  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>*>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>::WriteArray(TClass  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>*>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
inline ::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>* LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallSpecificAuto_2<TClass,TProperty>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass,TProperty>::__set__writer(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*,TProperty>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::LiteNetLib::Utils::NetDataWriter*,TProperty>*, 0x38>(this, std::forward<::System::Action_2<::LiteNetLib::Utils::NetDataWriter*,TProperty>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr ::System::Action_2<::LiteNetLib::Utils::NetDataWriter*,TProperty>* LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass,TProperty>::__get__writer()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::LiteNetLib::Utils::NetDataWriter*,TProperty>*, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::LiteNetLib::Utils::NetDataWriter*,TProperty>*> LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass,TProperty>::__get__writer() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::LiteNetLib::Utils::NetDataWriter*,TProperty>*, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass,TProperty>::__set__reader(::System::Func_2<::LiteNetLib::Utils::NetDataReader*,TProperty>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::LiteNetLib::Utils::NetDataReader*,TProperty>*, 0x40>(this, std::forward<::System::Func_2<::LiteNetLib::Utils::NetDataReader*,TProperty>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr ::System::Func_2<::LiteNetLib::Utils::NetDataReader*,TProperty>* LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass,TProperty>::__get__reader()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::LiteNetLib::Utils::NetDataReader*,TProperty>*, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::LiteNetLib::Utils::NetDataReader*,TProperty>*> LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass,TProperty>::__get__reader() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::LiteNetLib::Utils::NetDataReader*,TProperty>*, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
inline ::LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass,TProperty>* LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass,TProperty>::New_ctor(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*,TProperty>*  write, ::System::Func_2<::LiteNetLib::Utils::NetDataReader*,TProperty>*  read)  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass,TProperty>*>(write, read));
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass,TProperty>::_ctor(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*,TProperty>*  write, ::System::Func_2<::LiteNetLib::Utils::NetDataReader*,TProperty>*  read)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass,TProperty>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::LiteNetLib::Utils::NetDataWriter*,TProperty>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::LiteNetLib::Utils::NetDataReader*,TProperty>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, write, read);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass,TProperty>::Read(TClass  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass,TProperty>*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass,TProperty>::Write(TClass  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass,TProperty>*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass,TProperty>::ReadArray(TClass  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass,TProperty>*>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass,TProperty>::WriteArray(TClass  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallStatic_2<TClass,TProperty>*>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr void LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass,TProperty>::__set__constructor(::System::Func_1<TProperty>*  value)  {
::cordl_internals::setInstanceField<::System::Func_1<TProperty>*, 0x38>(this, std::forward<::System::Func_1<TProperty>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr ::System::Func_1<TProperty>* LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass,TProperty>::__get__constructor()  {
return ::cordl_internals::getInstanceField<::System::Func_1<TProperty>*, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<TProperty>*> LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass,TProperty>::__get__constructor() const {
return ::cordl_internals::getInstanceField<::System::Func_1<TProperty>*, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
inline ::LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass,TProperty>* LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass,TProperty>::New_ctor(::System::Func_1<TProperty>*  constructor)  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass,TProperty>*>(constructor));
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass,TProperty>::_ctor(::System::Func_1<TProperty>*  constructor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass,TProperty>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<TProperty>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, constructor);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass,TProperty>::Read(TClass  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass,TProperty>*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass,TProperty>::Write(TClass  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass,TProperty>*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass,TProperty>::ReadArray(TClass  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass,TProperty>*>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type TClass,::il2cpp_utils::il2cpp_reference_type TProperty>
inline void LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass,TProperty>::WriteArray(TClass  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FastCallClass_2<TClass,TProperty>*>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TClass>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>::Read(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>::Write(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>::ReadArray(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>*>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>::WriteArray(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>*>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__IntSerializer_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>::Read(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>::Write(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>::ReadArray(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>*>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>::WriteArray(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>*>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__UIntSerializer_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>::Read(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>::Write(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>::ReadArray(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>*>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>::WriteArray(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>*>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ShortSerializer_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>::Read(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>::Write(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>::ReadArray(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>*>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>::WriteArray(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>*>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__UShortSerializer_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>::Read(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>::Write(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>::ReadArray(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>*>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>::WriteArray(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>*>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__LongSerializer_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>::Read(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>::Write(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>::ReadArray(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>*>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>::WriteArray(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>*>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ULongSerializer_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>::Read(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>::Write(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>::ReadArray(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>*>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>::WriteArray(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>*>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ByteSerializer_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>::Read(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>::Write(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>::ReadArray(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>*>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>::WriteArray(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>*>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__SByteSerializer_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>::Read(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>::Write(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>::ReadArray(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>*>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>::WriteArray(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>*>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__FloatSerializer_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>::Read(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>::Write(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>::ReadArray(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>*>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>::WriteArray(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>*>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__DoubleSerializer_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>::Read(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>::Write(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>::ReadArray(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>*>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>::WriteArray(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>*>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__BoolSerializer_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__CharSerializer_1<T>::ElementWrite(::LiteNetLib::Utils::NetDataWriter*  w, ByRef<char16_t>  prop)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__CharSerializer_1<T>*>::get(),
                            "ElementWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, w, prop);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__CharSerializer_1<T>::ElementRead(::LiteNetLib::Utils::NetDataReader*  r, ByRef<char16_t>  prop)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__CharSerializer_1<T>*>::get(),
                            "ElementRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, r, prop);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::LiteNetLib::Utils::__NetSerializer__CharSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__CharSerializer_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__CharSerializer_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__CharSerializer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__CharSerializer_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__IPEndPointSerializer_1<T>::ElementWrite(::LiteNetLib::Utils::NetDataWriter*  w, ByRef<::System::Net::IPEndPoint*>  prop)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__IPEndPointSerializer_1<T>*>::get(),
                            "ElementWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::IPEndPoint*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, w, prop);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__IPEndPointSerializer_1<T>::ElementRead(::LiteNetLib::Utils::NetDataReader*  r, ByRef<::System::Net::IPEndPoint*>  prop)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__IPEndPointSerializer_1<T>*>::get(),
                            "ElementRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::IPEndPoint*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, r, prop);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::LiteNetLib::Utils::__NetSerializer__IPEndPointSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__IPEndPointSerializer_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__IPEndPointSerializer_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__IPEndPointSerializer_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__IPEndPointSerializer_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>::__set__maxLength(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>::__get__maxLength()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>::__get__maxLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>::New_ctor(int32_t  maxLength)  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>*>(maxLength));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>::_ctor(int32_t  maxLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, maxLength);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>::Read(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>::Write(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>::ReadArray(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>*>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>::WriteArray(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__StringSerializer_1<T>*>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>::__set_Property(::System::Reflection::PropertyInfo*  value)  {
::cordl_internals::setInstanceField<::System::Reflection::PropertyInfo*, 0x18>(this, std::forward<::System::Reflection::PropertyInfo*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Reflection::PropertyInfo* LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>::__get_Property()  {
return ::cordl_internals::getInstanceField<::System::Reflection::PropertyInfo*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::PropertyInfo*> LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>::__get_Property() const {
return ::cordl_internals::getInstanceField<::System::Reflection::PropertyInfo*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>::__set_PropertyType(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x20>(this, std::forward<::System::Type*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Type* LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>::__get_PropertyType()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Type*> LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>::__get_PropertyType() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>::New_ctor(::System::Reflection::PropertyInfo*  property, ::System::Type*  propertyType)  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>*>(property, propertyType));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>::_ctor(::System::Reflection::PropertyInfo*  property, ::System::Type*  propertyType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, property, propertyType);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>::Read(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>::Write(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__EnumByteSerializer_1<T>*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::LiteNetLib::Utils::__NetSerializer__EnumIntSerializer_1<T>* LiteNetLib::Utils::__NetSerializer__EnumIntSerializer_1<T>::New_ctor(::System::Reflection::PropertyInfo*  property, ::System::Type*  propertyType)  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__EnumIntSerializer_1<T>*>(property, propertyType));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__EnumIntSerializer_1<T>::_ctor(::System::Reflection::PropertyInfo*  property, ::System::Type*  propertyType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__EnumIntSerializer_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, property, propertyType);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__EnumIntSerializer_1<T>::Read(T  inf, ::LiteNetLib::Utils::NetDataReader*  r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__EnumIntSerializer_1<T>*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, r);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__EnumIntSerializer_1<T>::Write(T  inf, ::LiteNetLib::Utils::NetDataWriter*  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__EnumIntSerializer_1<T>*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, inf, w);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>::setStaticF_Instance(::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>*  value)  {
::cordl_internals::setStaticField<::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>*>::get>(std::forward<::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>* LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>::__set__serializers(::ArrayW<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*,::Array<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*,::Array<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>*>, 0x10>(this, std::forward<::ArrayW<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*,::Array<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*,::Array<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>*>& LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>::__get__serializers()  {
return ::cordl_internals::getInstanceField<::ArrayW<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*,::Array<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*,::Array<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>*> const& LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>::__get__serializers() const {
return ::cordl_internals::getInstanceField<::ArrayW<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*,::Array<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>::__set__membersCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>::__get__membersCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>::__get__membersCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>* LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>::New_ctor(::System::Collections::Generic::List_1<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>*  serializers)  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>*>(serializers));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>::_ctor(::System::Collections::Generic::List_1<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>*  serializers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, serializers);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>::Write(T  obj, ::LiteNetLib::Utils::NetDataWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obj, writer);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>::Read(T  obj, ::LiteNetLib::Utils::NetDataReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__ClassInfo_1<T>*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obj, reader);
}
template<::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr void LiteNetLib::Utils::__NetSerializer__CustomTypeClass_1<TProperty>::__set__constructor(::System::Func_1<TProperty>*  value)  {
::cordl_internals::setInstanceField<::System::Func_1<TProperty>*, 0x10>(this, std::forward<::System::Func_1<TProperty>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr ::System::Func_1<TProperty>* LiteNetLib::Utils::__NetSerializer__CustomTypeClass_1<TProperty>::__get__constructor()  {
return ::cordl_internals::getInstanceField<::System::Func_1<TProperty>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<TProperty>*> LiteNetLib::Utils::__NetSerializer__CustomTypeClass_1<TProperty>::__get__constructor() const {
return ::cordl_internals::getInstanceField<::System::Func_1<TProperty>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TProperty>
inline ::LiteNetLib::Utils::__NetSerializer__CustomTypeClass_1<TProperty>* LiteNetLib::Utils::__NetSerializer__CustomTypeClass_1<TProperty>::New_ctor(::System::Func_1<TProperty>*  constructor)  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__CustomTypeClass_1<TProperty>*>(constructor));
}
template<::il2cpp_utils::il2cpp_reference_type TProperty>
inline void LiteNetLib::Utils::__NetSerializer__CustomTypeClass_1<TProperty>::_ctor(::System::Func_1<TProperty>*  constructor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__CustomTypeClass_1<TProperty>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<TProperty>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, constructor);
}
template<::il2cpp_utils::il2cpp_reference_type TProperty>
template<typename T>
inline ::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>* LiteNetLib::Utils::__NetSerializer__CustomTypeClass_1<TProperty>::Get()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__CustomTypeClass_1<TProperty>*>::get(),
                        "Get",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr void LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>::__set__writer(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*,TProperty>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::LiteNetLib::Utils::NetDataWriter*,TProperty>*, 0x10>(this, std::forward<::System::Action_2<::LiteNetLib::Utils::NetDataWriter*,TProperty>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr ::System::Action_2<::LiteNetLib::Utils::NetDataWriter*,TProperty>* LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>::__get__writer()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::LiteNetLib::Utils::NetDataWriter*,TProperty>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::LiteNetLib::Utils::NetDataWriter*,TProperty>*> LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>::__get__writer() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::LiteNetLib::Utils::NetDataWriter*,TProperty>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr void LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>::__set__reader(::System::Func_2<::LiteNetLib::Utils::NetDataReader*,TProperty>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::LiteNetLib::Utils::NetDataReader*,TProperty>*, 0x18>(this, std::forward<::System::Func_2<::LiteNetLib::Utils::NetDataReader*,TProperty>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr ::System::Func_2<::LiteNetLib::Utils::NetDataReader*,TProperty>* LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>::__get__reader()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::LiteNetLib::Utils::NetDataReader*,TProperty>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TProperty>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::LiteNetLib::Utils::NetDataReader*,TProperty>*> LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>::__get__reader() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::LiteNetLib::Utils::NetDataReader*,TProperty>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TProperty>
inline ::LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>* LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>::New_ctor(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*,TProperty>*  writer, ::System::Func_2<::LiteNetLib::Utils::NetDataReader*,TProperty>*  reader)  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>*>(writer, reader));
}
template<::il2cpp_utils::il2cpp_reference_type TProperty>
inline void LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>::_ctor(::System::Action_2<::LiteNetLib::Utils::NetDataWriter*,TProperty>*  writer, ::System::Func_2<::LiteNetLib::Utils::NetDataReader*,TProperty>*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::LiteNetLib::Utils::NetDataWriter*,TProperty>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::LiteNetLib::Utils::NetDataReader*,TProperty>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer, reader);
}
template<::il2cpp_utils::il2cpp_reference_type TProperty>
template<typename T>
inline ::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>* LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>::Get()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::__NetSerializer__CustomTypeStatic_1<TProperty>*>::get(),
                        "Get",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::__NetSerializer__FastCall_1<T>*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
