#pragma once
#include "GlobalNamespace/zzzz__RemoteProcedureCall_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_2_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include "GlobalNamespace/zzzz__IRemoteProcedureCall_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr void GlobalNamespace::RemoteProcedureCall_2<float_t,T1>::__set__value0(::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>*, 0x18>(this, std::forward<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>* GlobalNamespace::RemoteProcedureCall_2<float_t,T1>::__get__value0()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>*> GlobalNamespace::RemoteProcedureCall_2<float_t,T1>::__get__value0() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr void GlobalNamespace::RemoteProcedureCall_2<float_t,T1>::__set__value1(::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>*, 0x20>(this, std::forward<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>* GlobalNamespace::RemoteProcedureCall_2<float_t,T1>::__get__value1()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>*> GlobalNamespace::RemoteProcedureCall_2<float_t,T1>::__get__value1() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline float_t GlobalNamespace::RemoteProcedureCall_2<float_t,T1>::get_value0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<float_t,T1>*>::get(),
                            "get_value0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline T1 GlobalNamespace::RemoteProcedureCall_2<float_t,T1>::get_value1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<float_t,T1>*>::get(),
                            "get_value1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T1, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline void GlobalNamespace::RemoteProcedureCall_2<float_t,T1>::SerializeData(::LiteNetLib::Utils::NetDataWriter*  writer, uint32_t  protocolVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<float_t,T1>*>::get(),
                            "SerializeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer, protocolVersion);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline void GlobalNamespace::RemoteProcedureCall_2<float_t,T1>::DeserializeData(::LiteNetLib::Utils::NetDataReader*  reader, uint32_t  protocolVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<float_t,T1>*>::get(),
                            "DeserializeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader, protocolVersion);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline ::GlobalNamespace::IRemoteProcedureCall* GlobalNamespace::RemoteProcedureCall_2<float_t,T1>::Init(int64_t  syncTime, float_t  value0, T1  value1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<float_t,T1>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IRemoteProcedureCall*, false>(*this, ___internal_method, syncTime, value0, value1);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline void GlobalNamespace::RemoteProcedureCall_2<float_t,T1>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<float_t,T1>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline ::GlobalNamespace::RemoteProcedureCall_2<float_t,T1>* GlobalNamespace::RemoteProcedureCall_2<float_t,T1>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RemoteProcedureCall_2<float_t,T1>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T1>
inline void GlobalNamespace::RemoteProcedureCall_2<float_t,T1>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<float_t,T1>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T0>
constexpr void GlobalNamespace::RemoteProcedureCall_2<T0,int32_t>::__set__value0(::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*, 0x18>(this, std::forward<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T0>
constexpr ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>* GlobalNamespace::RemoteProcedureCall_2<T0,int32_t>::__get__value0()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T0>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*> GlobalNamespace::RemoteProcedureCall_2<T0,int32_t>::__get__value0() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T0>
constexpr void GlobalNamespace::RemoteProcedureCall_2<T0,int32_t>::__set__value1(::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>*, 0x20>(this, std::forward<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T0>
constexpr ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>* GlobalNamespace::RemoteProcedureCall_2<T0,int32_t>::__get__value1()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T0>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>*> GlobalNamespace::RemoteProcedureCall_2<T0,int32_t>::__get__value1() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T0>
inline T0 GlobalNamespace::RemoteProcedureCall_2<T0,int32_t>::get_value0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0,int32_t>*>::get(),
                            "get_value0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T0, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T0>
inline int32_t GlobalNamespace::RemoteProcedureCall_2<T0,int32_t>::get_value1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0,int32_t>*>::get(),
                            "get_value1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T0>
inline void GlobalNamespace::RemoteProcedureCall_2<T0,int32_t>::SerializeData(::LiteNetLib::Utils::NetDataWriter*  writer, uint32_t  protocolVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0,int32_t>*>::get(),
                            "SerializeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer, protocolVersion);
}
template<::il2cpp_utils::il2cpp_reference_type T0>
inline void GlobalNamespace::RemoteProcedureCall_2<T0,int32_t>::DeserializeData(::LiteNetLib::Utils::NetDataReader*  reader, uint32_t  protocolVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0,int32_t>*>::get(),
                            "DeserializeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader, protocolVersion);
}
template<::il2cpp_utils::il2cpp_reference_type T0>
inline ::GlobalNamespace::IRemoteProcedureCall* GlobalNamespace::RemoteProcedureCall_2<T0,int32_t>::Init(int64_t  syncTime, T0  value0, int32_t  value1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0,int32_t>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IRemoteProcedureCall*, false>(*this, ___internal_method, syncTime, value0, value1);
}
template<::il2cpp_utils::il2cpp_reference_type T0>
inline void GlobalNamespace::RemoteProcedureCall_2<T0,int32_t>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0,int32_t>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T0>
inline ::GlobalNamespace::RemoteProcedureCall_2<T0,int32_t>* GlobalNamespace::RemoteProcedureCall_2<T0,int32_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RemoteProcedureCall_2<T0,int32_t>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T0>
inline void GlobalNamespace::RemoteProcedureCall_2<T0,int32_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
constexpr void GlobalNamespace::RemoteProcedureCall_2<T0,T1>::__set__value0(::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*, 0x18>(this, std::forward<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
constexpr ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>* GlobalNamespace::RemoteProcedureCall_2<T0,T1>::__get__value0()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*> GlobalNamespace::RemoteProcedureCall_2<T0,T1>::__get__value0() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
constexpr void GlobalNamespace::RemoteProcedureCall_2<T0,T1>::__set__value1(::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>*, 0x20>(this, std::forward<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
constexpr ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>* GlobalNamespace::RemoteProcedureCall_2<T0,T1>::__get__value1()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>*> GlobalNamespace::RemoteProcedureCall_2<T0,T1>::__get__value1() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
inline T0 GlobalNamespace::RemoteProcedureCall_2<T0,T1>::get_value0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0,T1>*>::get(),
                            "get_value0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T0, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
inline T1 GlobalNamespace::RemoteProcedureCall_2<T0,T1>::get_value1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0,T1>*>::get(),
                            "get_value1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T1, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
inline void GlobalNamespace::RemoteProcedureCall_2<T0,T1>::SerializeData(::LiteNetLib::Utils::NetDataWriter*  writer, uint32_t  protocolVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0,T1>*>::get(),
                            "SerializeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer, protocolVersion);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
inline void GlobalNamespace::RemoteProcedureCall_2<T0,T1>::DeserializeData(::LiteNetLib::Utils::NetDataReader*  reader, uint32_t  protocolVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0,T1>*>::get(),
                            "DeserializeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader, protocolVersion);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
inline ::GlobalNamespace::IRemoteProcedureCall* GlobalNamespace::RemoteProcedureCall_2<T0,T1>::Init(int64_t  syncTime, T0  value0, T1  value1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0,T1>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IRemoteProcedureCall*, false>(*this, ___internal_method, syncTime, value0, value1);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
inline void GlobalNamespace::RemoteProcedureCall_2<T0,T1>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0,T1>*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
inline ::GlobalNamespace::RemoteProcedureCall_2<T0,T1>* GlobalNamespace::RemoteProcedureCall_2<T0,T1>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RemoteProcedureCall_2<T0,T1>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
inline void GlobalNamespace::RemoteProcedureCall_2<T0,T1>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RemoteProcedureCall_2<T0,T1>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
