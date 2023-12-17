#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteProcedureCall_2)
namespace GlobalNamespace {
template<typename T>
class __RemoteProcedureCall__TypeWrapper_1;
}
namespace GlobalNamespace {
class IRemoteProcedureCall;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T0,typename T1>
class RemoteProcedureCall_2;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
class RemoteProcedureCall_2<T0,T1>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T0>
class RemoteProcedureCall_2<T0,int32_t>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T1>
class RemoteProcedureCall_2<float_t,T1>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::RemoteProcedureCall_2);
// Type: ::RemoteProcedureCall`2
// Type: ::RemoteProcedureCall`2
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12936)), TypeDefinitionIndex(TypeDefinitionIndex(12938))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12938), inst: 1650 })
// CS Name: ::RemoteProcedureCall`2<T0,T1>*
class CORDL_TYPE RemoteProcedureCall_2<float_t,T1> : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::RemoteProcedureCall)]{};

/// @brief Field _value0 offset 0x18
 __declspec(property(get=__get__value0, put=__set__value0)) ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>*  _value0;

/// @brief Field _value1 offset 0x20
 __declspec(property(get=__get__value1, put=__set__value1)) ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>*  _value1;

 __declspec(property(get=get_value0)) float_t  value0;

 __declspec(property(get=get_value1)) T1  value1;

constexpr void __set__value0(::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>*  value) ;

constexpr ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>* __get__value0() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>*> __get__value0() const;

constexpr void __set__value1(::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>*  value) ;

constexpr ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>* __get__value1() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>*> __get__value1() const;

/// @brief Method get_value0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t get_value0() ;

/// @brief Method get_value1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T1 get_value1() ;

/// @brief Method SerializeData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void SerializeData(::LiteNetLib::Utils::NetDataWriter*  writer, uint32_t  protocolVersion) ;

/// @brief Method DeserializeData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void DeserializeData(::LiteNetLib::Utils::NetDataReader*  reader, uint32_t  protocolVersion) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::IRemoteProcedureCall* Init(int64_t  syncTime, float_t  value0, T1  value1) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Release() ;

static inline ::GlobalNamespace::RemoteProcedureCall_2<float_t,T1>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteProcedureCall_2(RemoteProcedureCall_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteProcedureCall_2(RemoteProcedureCall_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RemoteProcedureCall_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RemoteProcedureCall`2
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12938)), TypeDefinitionIndex(TypeDefinitionIndex(12936))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12938), inst: 1629 })
// CS Name: ::RemoteProcedureCall`2<T0,T1>*
class CORDL_TYPE RemoteProcedureCall_2<T0,int32_t> : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::RemoteProcedureCall)]{};

/// @brief Field _value0 offset 0x18
 __declspec(property(get=__get__value0, put=__set__value0)) ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*  _value0;

/// @brief Field _value1 offset 0x20
 __declspec(property(get=__get__value1, put=__set__value1)) ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>*  _value1;

 __declspec(property(get=get_value0)) T0  value0;

 __declspec(property(get=get_value1)) int32_t  value1;

constexpr void __set__value0(::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*  value) ;

constexpr ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>* __get__value0() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*> __get__value0() const;

constexpr void __set__value1(::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>*  value) ;

constexpr ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>* __get__value1() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>*> __get__value1() const;

/// @brief Method get_value0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T0 get_value0() ;

/// @brief Method get_value1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_value1() ;

/// @brief Method SerializeData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void SerializeData(::LiteNetLib::Utils::NetDataWriter*  writer, uint32_t  protocolVersion) ;

/// @brief Method DeserializeData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void DeserializeData(::LiteNetLib::Utils::NetDataReader*  reader, uint32_t  protocolVersion) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::IRemoteProcedureCall* Init(int64_t  syncTime, T0  value0, int32_t  value1) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Release() ;

static inline ::GlobalNamespace::RemoteProcedureCall_2<T0,int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteProcedureCall_2(RemoteProcedureCall_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteProcedureCall_2(RemoteProcedureCall_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RemoteProcedureCall_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RemoteProcedureCall`2
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12938)), TypeDefinitionIndex(TypeDefinitionIndex(12936))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12938), inst: 81 })
// CS Name: ::RemoteProcedureCall`2<T0,T1>*
class CORDL_TYPE RemoteProcedureCall_2<T0,T1> : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::RemoteProcedureCall)]{};

/// @brief Field _value0 offset 0x18
 __declspec(property(get=__get__value0, put=__set__value0)) ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*  _value0;

/// @brief Field _value1 offset 0x20
 __declspec(property(get=__get__value1, put=__set__value1)) ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>*  _value1;

 __declspec(property(get=get_value0)) T0  value0;

 __declspec(property(get=get_value1)) T1  value1;

constexpr void __set__value0(::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*  value) ;

constexpr ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>* __get__value0() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*> __get__value0() const;

constexpr void __set__value1(::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>*  value) ;

constexpr ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>* __get__value1() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T1>*> __get__value1() const;

/// @brief Method get_value0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T0 get_value0() ;

/// @brief Method get_value1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T1 get_value1() ;

/// @brief Method SerializeData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void SerializeData(::LiteNetLib::Utils::NetDataWriter*  writer, uint32_t  protocolVersion) ;

/// @brief Method DeserializeData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void DeserializeData(::LiteNetLib::Utils::NetDataReader*  reader, uint32_t  protocolVersion) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::IRemoteProcedureCall* Init(int64_t  syncTime, T0  value0, T1  value1) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Release() ;

static inline ::GlobalNamespace::RemoteProcedureCall_2<T0,T1>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteProcedureCall_2(RemoteProcedureCall_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteProcedureCall_2(RemoteProcedureCall_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RemoteProcedureCall_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RemoteProcedureCall_2, "", "RemoteProcedureCall`2");
