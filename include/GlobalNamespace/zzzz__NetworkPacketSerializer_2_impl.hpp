#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkPacketSerializer_2_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPacketSerializer_1_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPacketSerializer_2_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPacketSubSerializer_1_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
template<typename TType,typename TData,typename TPacket>
constexpr void GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass4_0_1<TType,TData,TPacket>::__set_callback(::System::Action_1<TPacket>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<TPacket>*, 0x10>(this, std::forward<::System::Action_1<TPacket>*>(value));
}
template<typename TType,typename TData,typename TPacket>
constexpr ::System::Action_1<TPacket>* GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass4_0_1<TType,TData,TPacket>::__get_callback()  {
return ::cordl_internals::getInstanceField<::System::Action_1<TPacket>*, 0x10>(this);
}
template<typename TType,typename TData,typename TPacket>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<TPacket>*> GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass4_0_1<TType,TData,TPacket>::__get_callback() const {
return ::cordl_internals::getInstanceField<::System::Action_1<TPacket>*, 0x10>(this);
}
template<typename TType,typename TData,typename TPacket>
inline ::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass4_0_1<TType,TData,TPacket>* GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass4_0_1<TType,TData,TPacket>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass4_0_1<TType,TData,TPacket>*>());
}
template<typename TType,typename TData,typename TPacket>
inline void GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass4_0_1<TType,TData,TPacket>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass4_0_1<TType,TData,TPacket>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<typename TType,typename TData,typename TPacket>
inline void GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass4_0_1<TType,TData,TPacket>::_RegisterCallback_b__0(TPacket  packet, TData  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass4_0_1<TType,TData,TPacket>*>::get(),
                            "<RegisterCallback>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, packet, data);
}
template<typename TType,typename TData,typename TPacket>
inline void GlobalNamespace::__NetworkPacketSerializer_2____c__6_1<TType,TData,TPacket>::setStaticF___9(::GlobalNamespace::__NetworkPacketSerializer_2____c__6_1<TType,TData,TPacket>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__NetworkPacketSerializer_2____c__6_1<TType,TData,TPacket>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPacketSerializer_2____c__6_1<TType,TData,TPacket>*>::get>(std::forward<::GlobalNamespace::__NetworkPacketSerializer_2____c__6_1<TType,TData,TPacket>*>(value));
}
template<typename TType,typename TData,typename TPacket>
inline ::GlobalNamespace::__NetworkPacketSerializer_2____c__6_1<TType,TData,TPacket>* GlobalNamespace::__NetworkPacketSerializer_2____c__6_1<TType,TData,TPacket>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__NetworkPacketSerializer_2____c__6_1<TType,TData,TPacket>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPacketSerializer_2____c__6_1<TType,TData,TPacket>*>::get>();
}
template<typename TType,typename TData,typename TPacket>
inline void GlobalNamespace::__NetworkPacketSerializer_2____c__6_1<TType,TData,TPacket>::setStaticF___9__6_0(::System::Func_2<TData,TPacket>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<TData,TPacket>*, "<>9__6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPacketSerializer_2____c__6_1<TType,TData,TPacket>*>::get>(std::forward<::System::Func_2<TData,TPacket>*>(value));
}
template<typename TType,typename TData,typename TPacket>
inline ::System::Func_2<TData,TPacket>* GlobalNamespace::__NetworkPacketSerializer_2____c__6_1<TType,TData,TPacket>::getStaticF___9__6_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<TData,TPacket>*, "<>9__6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPacketSerializer_2____c__6_1<TType,TData,TPacket>*>::get>();
}
template<typename TType,typename TData,typename TPacket>
inline ::GlobalNamespace::__NetworkPacketSerializer_2____c__6_1<TType,TData,TPacket>* GlobalNamespace::__NetworkPacketSerializer_2____c__6_1<TType,TData,TPacket>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__NetworkPacketSerializer_2____c__6_1<TType,TData,TPacket>*>());
}
template<typename TType,typename TData,typename TPacket>
inline void GlobalNamespace::__NetworkPacketSerializer_2____c__6_1<TType,TData,TPacket>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPacketSerializer_2____c__6_1<TType,TData,TPacket>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<typename TType,typename TData,typename TPacket>
inline TPacket GlobalNamespace::__NetworkPacketSerializer_2____c__6_1<TType,TData,TPacket>::_RegisterCallback_b__6_0(TData  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPacketSerializer_2____c__6_1<TType,TData,TPacket>*>::get(),
                            "<RegisterCallback>b__6_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TPacket, false>(*this, ___internal_method, data);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
constexpr void GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass5_0_1<TType,TData,TPacket>::__set_callback(::System::Action_1<TPacket>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<TPacket>*, 0x10>(this, std::forward<::System::Action_1<TPacket>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
constexpr ::System::Action_1<TPacket>* GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass5_0_1<TType,TData,TPacket>::__get_callback()  {
return ::cordl_internals::getInstanceField<::System::Action_1<TPacket>*, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<TPacket>*> GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass5_0_1<TType,TData,TPacket>::__get_callback() const {
return ::cordl_internals::getInstanceField<::System::Action_1<TPacket>*, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
constexpr void GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass5_0_1<TType,TData,TPacket>::__set_constructor(::System::Func_1<TPacket>*  value)  {
::cordl_internals::setInstanceField<::System::Func_1<TPacket>*, 0x18>(this, std::forward<::System::Func_1<TPacket>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
constexpr ::System::Func_1<TPacket>* GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass5_0_1<TType,TData,TPacket>::__get_constructor()  {
return ::cordl_internals::getInstanceField<::System::Func_1<TPacket>*, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<TPacket>*> GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass5_0_1<TType,TData,TPacket>::__get_constructor() const {
return ::cordl_internals::getInstanceField<::System::Func_1<TPacket>*, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
inline ::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass5_0_1<TType,TData,TPacket>* GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass5_0_1<TType,TData,TPacket>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass5_0_1<TType,TData,TPacket>*>());
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
inline void GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass5_0_1<TType,TData,TPacket>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass5_0_1<TType,TData,TPacket>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
inline void GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass5_0_1<TType,TData,TPacket>::_RegisterCallback_b__0(TPacket  packet, TData  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass5_0_1<TType,TData,TPacket>*>::get(),
                            "<RegisterCallback>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPacket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, packet, data);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
inline TPacket GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass5_0_1<TType,TData,TPacket>::_RegisterCallback_b__1(TData  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass5_0_1<TType,TData,TPacket>*>::get(),
                            "<RegisterCallback>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TPacket, false>(*this, ___internal_method, data);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
constexpr void GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass7_0_1<TType,TData,TPacket>::__set_constructor(::System::Func_1<TPacket>*  value)  {
::cordl_internals::setInstanceField<::System::Func_1<TPacket>*, 0x10>(this, std::forward<::System::Func_1<TPacket>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
constexpr ::System::Func_1<TPacket>* GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass7_0_1<TType,TData,TPacket>::__get_constructor()  {
return ::cordl_internals::getInstanceField<::System::Func_1<TPacket>*, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<TPacket>*> GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass7_0_1<TType,TData,TPacket>::__get_constructor() const {
return ::cordl_internals::getInstanceField<::System::Func_1<TPacket>*, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
inline ::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass7_0_1<TType,TData,TPacket>* GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass7_0_1<TType,TData,TPacket>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass7_0_1<TType,TData,TPacket>*>());
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
inline void GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass7_0_1<TType,TData,TPacket>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass7_0_1<TType,TData,TPacket>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
inline TPacket GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass7_0_1<TType,TData,TPacket>::_RegisterCallback_b__0(TData  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass7_0_1<TType,TData,TPacket>*>::get(),
                            "<RegisterCallback>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TPacket, false>(*this, ___internal_method, data);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
constexpr void GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>::__set_constructor(::System::Func_2<TData,TPacket>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TData,TPacket>*, 0x10>(this, std::forward<::System::Func_2<TData,TPacket>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
constexpr ::System::Func_2<TData,TPacket>* GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>::__get_constructor()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TData,TPacket>*, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TData,TPacket>*> GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>::__get_constructor() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TData,TPacket>*, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
constexpr void GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>::__set_callback(::System::Action_2<TPacket,TData>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TPacket,TData>*, 0x18>(this, std::forward<::System::Action_2<TPacket,TData>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
constexpr ::System::Action_2<TPacket,TData>* GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>::__get_callback()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TPacket,TData>*, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TPacket,TData>*> GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>::__get_callback() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TPacket,TData>*, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
constexpr void GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>::__set_deserialize(::System::Func_4<::LiteNetLib::Utils::NetDataReader*,int32_t,TData,TPacket>*  value)  {
::cordl_internals::setInstanceField<::System::Func_4<::LiteNetLib::Utils::NetDataReader*,int32_t,TData,TPacket>*, 0x20>(this, std::forward<::System::Func_4<::LiteNetLib::Utils::NetDataReader*,int32_t,TData,TPacket>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
constexpr ::System::Func_4<::LiteNetLib::Utils::NetDataReader*,int32_t,TData,TPacket>* GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>::__get_deserialize()  {
return ::cordl_internals::getInstanceField<::System::Func_4<::LiteNetLib::Utils::NetDataReader*,int32_t,TData,TPacket>*, 0x20>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
constexpr ::cordl_internals::to_const_pointer<::System::Func_4<::LiteNetLib::Utils::NetDataReader*,int32_t,TData,TPacket>*> GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>::__get_deserialize() const {
return ::cordl_internals::getInstanceField<::System::Func_4<::LiteNetLib::Utils::NetDataReader*,int32_t,TData,TPacket>*, 0x20>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
inline ::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>* GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>*>());
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
inline void GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
inline TPacket GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>::_RegisterCallback_b__0(::LiteNetLib::Utils::NetDataReader*  reader, int32_t  size, TData  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>*>::get(),
                            "<RegisterCallback>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TPacket, false>(*this, ___internal_method, reader, size, data);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
inline void GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>::_RegisterCallback_b__1(::LiteNetLib::Utils::NetDataReader*  reader, int32_t  size, TData  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>*>::get(),
                            "<RegisterCallback>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader, size, data);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
constexpr void GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>::__set_constructor(::System::Func_2<TData,TPacket>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TData,TPacket>*, 0x10>(this, std::forward<::System::Func_2<TData,TPacket>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
constexpr ::System::Func_2<TData,TPacket>* GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>::__get_constructor()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TData,TPacket>*, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TData,TPacket>*> GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>::__get_constructor() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TData,TPacket>*, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
constexpr void GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>::__set_callback(::System::Action_2<TPacket,TData>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<TPacket,TData>*, 0x18>(this, std::forward<::System::Action_2<TPacket,TData>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
constexpr ::System::Action_2<TPacket,TData>* GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>::__get_callback()  {
return ::cordl_internals::getInstanceField<::System::Action_2<TPacket,TData>*, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TPacket,TData>*> GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>::__get_callback() const {
return ::cordl_internals::getInstanceField<::System::Action_2<TPacket,TData>*, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
constexpr void GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>::__set_deserialize(::System::Func_4<::LiteNetLib::Utils::NetDataReader*,int32_t,TData,TPacket>*  value)  {
::cordl_internals::setInstanceField<::System::Func_4<::LiteNetLib::Utils::NetDataReader*,int32_t,TData,TPacket>*, 0x20>(this, std::forward<::System::Func_4<::LiteNetLib::Utils::NetDataReader*,int32_t,TData,TPacket>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
constexpr ::System::Func_4<::LiteNetLib::Utils::NetDataReader*,int32_t,TData,TPacket>* GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>::__get_deserialize()  {
return ::cordl_internals::getInstanceField<::System::Func_4<::LiteNetLib::Utils::NetDataReader*,int32_t,TData,TPacket>*, 0x20>(this);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
constexpr ::cordl_internals::to_const_pointer<::System::Func_4<::LiteNetLib::Utils::NetDataReader*,int32_t,TData,TPacket>*> GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>::__get_deserialize() const {
return ::cordl_internals::getInstanceField<::System::Func_4<::LiteNetLib::Utils::NetDataReader*,int32_t,TData,TPacket>*, 0x20>(this);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
inline ::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>* GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>*>());
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
inline void GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
inline TPacket GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>::_RegisterCallback_b__0(::LiteNetLib::Utils::NetDataReader*  reader, int32_t  size, TData  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>*>::get(),
                            "<RegisterCallback>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TPacket, false>(*this, ___internal_method, reader, size, data);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData,::il2cpp_utils::il2cpp_reference_type TPacket>
inline void GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>::_RegisterCallback_b__1(::LiteNetLib::Utils::NetDataReader*  reader, int32_t  size, TData  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass8_0_1<TType,TData,TPacket>*>::get(),
                            "<RegisterCallback>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader, size, data);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr void GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass10_0<TType,TData>::__set_subSubSerializer(::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*, 0x10>(this, std::forward<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr ::GlobalNamespace::INetworkPacketSubSerializer_1<TData>* GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass10_0<TType,TData>::__get_subSubSerializer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*> GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass10_0<TType,TData>::__get_subSubSerializer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline ::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass10_0<TType,TData>* GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass10_0<TType,TData>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass10_0<TType,TData>*>());
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline void GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass10_0<TType,TData>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass10_0<TType,TData>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline void GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass10_0<TType,TData>::_RegisterSubSerializer_b__0(::LiteNetLib::Utils::NetDataReader*  reader, int32_t  size, TData  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass10_0<TType,TData>*>::get(),
                            "<RegisterSubSerializer>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader, size, data);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr void GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass10_0<TType,TData>::__set_subSubSerializer(::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*, 0x10>(this, std::forward<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr ::GlobalNamespace::INetworkPacketSubSerializer_1<TData>* GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass10_0<TType,TData>::__get_subSubSerializer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*> GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass10_0<TType,TData>::__get_subSubSerializer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline ::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass10_0<TType,TData>* GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass10_0<TType,TData>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass10_0<TType,TData>*>());
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline void GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass10_0<TType,TData>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass10_0<TType,TData>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline void GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass10_0<TType,TData>::_RegisterSubSerializer_b__0(::LiteNetLib::Utils::NetDataReader*  reader, int32_t  size, TData  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPacketSerializer_2____c__DisplayClass10_0<TType,TData>*>::get(),
                            "<RegisterSubSerializer>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader, size, data);
}
/// @brief Convert operator to "::GlobalNamespace::INetworkPacketSerializer_1<TData>"
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr  GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::operator ::GlobalNamespace::INetworkPacketSerializer_1<TData>*() noexcept {
return static_cast<::GlobalNamespace::INetworkPacketSerializer_1<TData>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INetworkPacketSubSerializer_1<TData>"
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr  GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::operator ::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*() noexcept {
return static_cast<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*>(static_cast<void*>(this));
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::__set__messsageHandlers(::System::Collections::Generic::Dictionary_2<uint8_t,::System::Action_3<::LiteNetLib::Utils::NetDataReader*,int32_t,TData>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Action_3<::LiteNetLib::Utils::NetDataReader*,int32_t,TData>*>*, 0x10>(this, std::forward<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Action_3<::LiteNetLib::Utils::NetDataReader*,int32_t,TData>*>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Action_3<::LiteNetLib::Utils::NetDataReader*,int32_t,TData>*>* GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::__get__messsageHandlers()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Action_3<::LiteNetLib::Utils::NetDataReader*,int32_t,TData>*>*, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Action_3<::LiteNetLib::Utils::NetDataReader*,int32_t,TData>*>*> GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::__get__messsageHandlers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Action_3<::LiteNetLib::Utils::NetDataReader*,int32_t,TData>*>*, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::__set__typeRegistry(::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>*, 0x18>(this, std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>* GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::__get__typeRegistry()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>*, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>*> GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::__get__typeRegistry() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>*, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::__set__subSerializerRegistry(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*,uint8_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*,uint8_t>*, 0x20>(this, std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*,uint8_t>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*,uint8_t>* GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::__get__subSerializerRegistry()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*,uint8_t>*, 0x20>(this);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*,uint8_t>*> GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::__get__subSerializerRegistry() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*,uint8_t>*, 0x20>(this);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::__set__internalWriter(::LiteNetLib::Utils::NetDataWriter*  value)  {
::cordl_internals::setInstanceField<::LiteNetLib::Utils::NetDataWriter*, 0x28>(this, std::forward<::LiteNetLib::Utils::NetDataWriter*>(value));
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr ::LiteNetLib::Utils::NetDataWriter* GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::__get__internalWriter()  {
return ::cordl_internals::getInstanceField<::LiteNetLib::Utils::NetDataWriter*, 0x28>(this);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::__get__internalWriter() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::Utils::NetDataWriter*, 0x28>(this);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
template<typename TPacket>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::RegisterCallback(TType  packetType, ::System::Action_1<TPacket>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                        "RegisterCallback",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TPacket>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, packetType, callback);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
template<typename TPacket>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::RegisterCallback(TType  packetType, ::System::Action_1<TPacket>*  callback, ::System::Func_1<TPacket>*  constructor)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                        "RegisterCallback",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TPacket>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<TPacket>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, packetType, callback, constructor);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
template<typename TPacket>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::RegisterCallback(TType  packetType, ::System::Action_2<TPacket,TData>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                        "RegisterCallback",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<TPacket,TData>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, packetType, callback);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
template<typename TPacket>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::RegisterCallback(TType  packetType, ::System::Action_2<TPacket,TData>*  callback, ::System::Func_1<TPacket>*  constructor)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                        "RegisterCallback",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<TPacket,TData>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<TPacket>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, packetType, callback, constructor);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
template<typename TPacket>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::RegisterCallback(TType  packetType, ::System::Action_2<TPacket,TData>*  callback, ::System::Func_2<TData,TPacket>*  constructor)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                        "RegisterCallback",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<TPacket,TData>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TData,TPacket>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, packetType, callback, constructor);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
template<typename TPacket>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::UnregisterCallback(TType  packetType)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                        "UnregisterCallback",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, packetType);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::RegisterSubSerializer(TType  packetType, ::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*  subSubSerializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            "RegisterSubSerializer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, packetType, subSubSerializer);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::UnregisterSubSerializer(TType  packetType, ::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*  subSubSerializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            "UnregisterSubSerializer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, packetType, subSubSerializer);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::CopyFrom(::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            "CopyFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, other);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::SerializePacket(::LiteNetLib::Utils::NetDataWriter*  writer, ::LiteNetLib::Utils::INetSerializable*  packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            "SerializePacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer, packet);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::SerializePacketInternal(::LiteNetLib::Utils::NetDataWriter*  externalWriter, ::LiteNetLib::Utils::INetSerializable*  packet, bool  prependLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            "SerializePacketInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, externalWriter, packet, prependLength);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::ProcessAllPackets(::LiteNetLib::Utils::NetDataReader*  reader, TData  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            "ProcessAllPackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader, data);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline bool GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::ProcessPacket(::LiteNetLib::Utils::NetDataReader*  reader, TData  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            "ProcessPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, reader, data);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::ProcessPacketInternal(::LiteNetLib::Utils::NetDataReader*  reader, int32_t  length, TData  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            "ProcessPacketInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader, length, data);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline bool GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::TryGetPacketType(::System::Type*  type, ByRef<uint8_t>  packetType, ByRef<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*>  subSerializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            "TryGetPacketType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, type, packetType, subSerializer);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline bool GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::HandlesType(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            "HandlesType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, type);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::INetworkPacketSubSerializer_TData__Serialize(::LiteNetLib::Utils::NetDataWriter*  writer, ::LiteNetLib::Utils::INetSerializable*  packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            "INetworkPacketSubSerializer<TData>.Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer, packet);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::INetworkPacketSubSerializer_TData__Deserialize(::LiteNetLib::Utils::NetDataReader*  reader, int32_t  length, TData  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            "INetworkPacketSubSerializer<TData>.Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader, length, data);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::Log(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, message);
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline ::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>* GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>());
}
template<::cordl_internals::is_or_is_backed_by<uint8_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::GlobalNamespace::INetworkPacketSerializer_1<TData>"
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr  GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::operator ::GlobalNamespace::INetworkPacketSerializer_1<TData>*() noexcept {
return static_cast<::GlobalNamespace::INetworkPacketSerializer_1<TData>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INetworkPacketSubSerializer_1<TData>"
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr  GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::operator ::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*() noexcept {
return static_cast<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*>(static_cast<void*>(this));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::__set__messsageHandlers(::System::Collections::Generic::Dictionary_2<uint8_t,::System::Action_3<::LiteNetLib::Utils::NetDataReader*,int32_t,TData>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Action_3<::LiteNetLib::Utils::NetDataReader*,int32_t,TData>*>*, 0x10>(this, std::forward<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Action_3<::LiteNetLib::Utils::NetDataReader*,int32_t,TData>*>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Action_3<::LiteNetLib::Utils::NetDataReader*,int32_t,TData>*>* GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::__get__messsageHandlers()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Action_3<::LiteNetLib::Utils::NetDataReader*,int32_t,TData>*>*, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Action_3<::LiteNetLib::Utils::NetDataReader*,int32_t,TData>*>*> GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::__get__messsageHandlers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Action_3<::LiteNetLib::Utils::NetDataReader*,int32_t,TData>*>*, 0x10>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::__set__typeRegistry(::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>*, 0x18>(this, std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>* GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::__get__typeRegistry()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>*, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>*> GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::__get__typeRegistry() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::Type*,uint8_t>*, 0x18>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::__set__subSerializerRegistry(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*,uint8_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*,uint8_t>*, 0x20>(this, std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*,uint8_t>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*,uint8_t>* GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::__get__subSerializerRegistry()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*,uint8_t>*, 0x20>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*,uint8_t>*> GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::__get__subSerializerRegistry() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*,uint8_t>*, 0x20>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::__set__internalWriter(::LiteNetLib::Utils::NetDataWriter*  value)  {
::cordl_internals::setInstanceField<::LiteNetLib::Utils::NetDataWriter*, 0x28>(this, std::forward<::LiteNetLib::Utils::NetDataWriter*>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr ::LiteNetLib::Utils::NetDataWriter* GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::__get__internalWriter()  {
return ::cordl_internals::getInstanceField<::LiteNetLib::Utils::NetDataWriter*, 0x28>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::__get__internalWriter() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::Utils::NetDataWriter*, 0x28>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
template<typename TPacket>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::RegisterCallback(TType  packetType, ::System::Action_1<TPacket>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                        "RegisterCallback",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TPacket>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, packetType, callback);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
template<typename TPacket>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::RegisterCallback(TType  packetType, ::System::Action_1<TPacket>*  callback, ::System::Func_1<TPacket>*  constructor)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                        "RegisterCallback",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TPacket>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<TPacket>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, packetType, callback, constructor);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
template<typename TPacket>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::RegisterCallback(TType  packetType, ::System::Action_2<TPacket,TData>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                        "RegisterCallback",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<TPacket,TData>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, packetType, callback);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
template<typename TPacket>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::RegisterCallback(TType  packetType, ::System::Action_2<TPacket,TData>*  callback, ::System::Func_1<TPacket>*  constructor)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                        "RegisterCallback",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<TPacket,TData>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<TPacket>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, packetType, callback, constructor);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
template<typename TPacket>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::RegisterCallback(TType  packetType, ::System::Action_2<TPacket,TData>*  callback, ::System::Func_2<TData,TPacket>*  constructor)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                        "RegisterCallback",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<TPacket,TData>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TData,TPacket>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, packetType, callback, constructor);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
template<typename TPacket>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::UnregisterCallback(TType  packetType)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                        "UnregisterCallback",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPacket>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, packetType);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::RegisterSubSerializer(TType  packetType, ::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*  subSubSerializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            "RegisterSubSerializer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, packetType, subSubSerializer);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::UnregisterSubSerializer(TType  packetType, ::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*  subSubSerializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            "UnregisterSubSerializer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, packetType, subSubSerializer);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::CopyFrom(::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            "CopyFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, other);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::SerializePacket(::LiteNetLib::Utils::NetDataWriter*  writer, ::LiteNetLib::Utils::INetSerializable*  packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            "SerializePacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer, packet);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::SerializePacketInternal(::LiteNetLib::Utils::NetDataWriter*  externalWriter, ::LiteNetLib::Utils::INetSerializable*  packet, bool  prependLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            "SerializePacketInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, externalWriter, packet, prependLength);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::ProcessAllPackets(::LiteNetLib::Utils::NetDataReader*  reader, TData  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            "ProcessAllPackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader, data);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline bool GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::ProcessPacket(::LiteNetLib::Utils::NetDataReader*  reader, TData  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            "ProcessPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, reader, data);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::ProcessPacketInternal(::LiteNetLib::Utils::NetDataReader*  reader, int32_t  length, TData  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            "ProcessPacketInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader, length, data);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline bool GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::TryGetPacketType(::System::Type*  type, ByRef<uint8_t>  packetType, ByRef<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*>  subSerializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            "TryGetPacketType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::INetworkPacketSubSerializer_1<TData>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, type, packetType, subSerializer);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline bool GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::HandlesType(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            "HandlesType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, type);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::INetworkPacketSubSerializer_TData__Serialize(::LiteNetLib::Utils::NetDataWriter*  writer, ::LiteNetLib::Utils::INetSerializable*  packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            "INetworkPacketSubSerializer<TData>.Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer, packet);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::INetworkPacketSubSerializer_TData__Deserialize(::LiteNetLib::Utils::NetDataReader*  reader, int32_t  length, TData  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            "INetworkPacketSubSerializer<TData>.Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader, length, data);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::Log(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, message);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline ::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>* GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>());
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TType,::il2cpp_utils::il2cpp_reference_type TData>
inline void GlobalNamespace::NetworkPacketSerializer_2<TType,TData>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPacketSerializer_2<TType,TData>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
