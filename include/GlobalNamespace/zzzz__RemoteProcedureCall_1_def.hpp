#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteProcedureCall_1)
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
template<typename T>
class __RemoteProcedureCall__TypeWrapper_1;
}
namespace GlobalNamespace {
class IRemoteProcedureCall;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T0>
class RemoteProcedureCall_1;
}
namespace GlobalNamespace {
template<>
class RemoteProcedureCall_1<::GlobalNamespace::SongPackMask>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> T0>
class RemoteProcedureCall_1<T0>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T0>
class RemoteProcedureCall_1<T0>;
}
namespace GlobalNamespace {
template<>
class RemoteProcedureCall_1<bool>;
}
namespace GlobalNamespace {
template<>
class RemoteProcedureCall_1<int64_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::RemoteProcedureCall_1);
// Type: ::RemoteProcedureCall`1
// Type: ::RemoteProcedureCall`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12937)), TypeDefinitionIndex(TypeDefinitionIndex(12936))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12937), inst: 3352 })
// CS Name: ::RemoteProcedureCall`1<T0>*
class CORDL_TYPE RemoteProcedureCall_1<::GlobalNamespace::SongPackMask> : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::RemoteProcedureCall)]{};

/// @brief Field _value0 offset 0x18
 __declspec(property(get=__get__value0, put=__set__value0)) ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>*  _value0;

 __declspec(property(get=get_value0)) ::GlobalNamespace::SongPackMask  value0;

constexpr void __set__value0(::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>*  value) ;

constexpr ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>* __get__value0() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>*> __get__value0() const;

/// @brief Method get_value0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::SongPackMask get_value0() ;

/// @brief Method SerializeData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void SerializeData(::LiteNetLib::Utils::NetDataWriter*  writer, uint32_t  protocolVersion) ;

/// @brief Method DeserializeData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void DeserializeData(::LiteNetLib::Utils::NetDataReader*  reader, uint32_t  protocolVersion) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::IRemoteProcedureCall* Init(int64_t  syncTime, ::GlobalNamespace::SongPackMask  value0) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Release() ;

static inline ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::SongPackMask>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteProcedureCall_1(RemoteProcedureCall_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteProcedureCall_1(RemoteProcedureCall_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RemoteProcedureCall_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RemoteProcedureCall`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12937)), TypeDefinitionIndex(TypeDefinitionIndex(12936))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12937), inst: 974 })
// CS Name: ::RemoteProcedureCall`1<T0>*
class CORDL_TYPE RemoteProcedureCall_1<T0> : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::RemoteProcedureCall)]{};

/// @brief Field _value0 offset 0x18
 __declspec(property(get=__get__value0, put=__set__value0)) ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*  _value0;

 __declspec(property(get=get_value0)) T0  value0;

constexpr void __set__value0(::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*  value) ;

constexpr ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>* __get__value0() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*> __get__value0() const;

/// @brief Method get_value0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T0 get_value0() ;

/// @brief Method SerializeData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void SerializeData(::LiteNetLib::Utils::NetDataWriter*  writer, uint32_t  protocolVersion) ;

/// @brief Method DeserializeData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void DeserializeData(::LiteNetLib::Utils::NetDataReader*  reader, uint32_t  protocolVersion) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::IRemoteProcedureCall* Init(int64_t  syncTime, T0  value0) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Release() ;

static inline ::GlobalNamespace::RemoteProcedureCall_1<T0>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteProcedureCall_1(RemoteProcedureCall_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteProcedureCall_1(RemoteProcedureCall_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RemoteProcedureCall_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RemoteProcedureCall`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12936)), TypeDefinitionIndex(TypeDefinitionIndex(12937))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12937), inst: 333 })
// CS Name: ::RemoteProcedureCall`1<T0>*
class CORDL_TYPE RemoteProcedureCall_1<int64_t> : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::RemoteProcedureCall)]{};

/// @brief Field _value0 offset 0x18
 __declspec(property(get=__get__value0, put=__set__value0)) ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>*  _value0;

 __declspec(property(get=get_value0)) int64_t  value0;

constexpr void __set__value0(::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>*  value) ;

constexpr ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>* __get__value0() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>*> __get__value0() const;

/// @brief Method get_value0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline int64_t get_value0() ;

/// @brief Method SerializeData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void SerializeData(::LiteNetLib::Utils::NetDataWriter*  writer, uint32_t  protocolVersion) ;

/// @brief Method DeserializeData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void DeserializeData(::LiteNetLib::Utils::NetDataReader*  reader, uint32_t  protocolVersion) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::IRemoteProcedureCall* Init(int64_t  syncTime, int64_t  value0) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Release() ;

static inline ::GlobalNamespace::RemoteProcedureCall_1<int64_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteProcedureCall_1(RemoteProcedureCall_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteProcedureCall_1(RemoteProcedureCall_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RemoteProcedureCall_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RemoteProcedureCall`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12937)), TypeDefinitionIndex(TypeDefinitionIndex(12936))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12937), inst: 105 })
// CS Name: ::RemoteProcedureCall`1<T0>*
class CORDL_TYPE RemoteProcedureCall_1<bool> : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::RemoteProcedureCall)]{};

/// @brief Field _value0 offset 0x18
 __declspec(property(get=__get__value0, put=__set__value0)) ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>*  _value0;

 __declspec(property(get=get_value0)) bool  value0;

constexpr void __set__value0(::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>*  value) ;

constexpr ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>* __get__value0() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>*> __get__value0() const;

/// @brief Method get_value0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_value0() ;

/// @brief Method SerializeData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void SerializeData(::LiteNetLib::Utils::NetDataWriter*  writer, uint32_t  protocolVersion) ;

/// @brief Method DeserializeData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void DeserializeData(::LiteNetLib::Utils::NetDataReader*  reader, uint32_t  protocolVersion) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::IRemoteProcedureCall* Init(int64_t  syncTime, bool  value0) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Release() ;

static inline ::GlobalNamespace::RemoteProcedureCall_1<bool>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteProcedureCall_1(RemoteProcedureCall_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteProcedureCall_1(RemoteProcedureCall_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RemoteProcedureCall_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RemoteProcedureCall`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12937)), TypeDefinitionIndex(TypeDefinitionIndex(12936))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12937), inst: 2 })
// CS Name: ::RemoteProcedureCall`1<T0>*
class CORDL_TYPE RemoteProcedureCall_1<T0> : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::RemoteProcedureCall)]{};

/// @brief Field _value0 offset 0x18
 __declspec(property(get=__get__value0, put=__set__value0)) ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*  _value0;

 __declspec(property(get=get_value0)) T0  value0;

constexpr void __set__value0(::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*  value) ;

constexpr ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>* __get__value0() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T0>*> __get__value0() const;

/// @brief Method get_value0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T0 get_value0() ;

/// @brief Method SerializeData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void SerializeData(::LiteNetLib::Utils::NetDataWriter*  writer, uint32_t  protocolVersion) ;

/// @brief Method DeserializeData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void DeserializeData(::LiteNetLib::Utils::NetDataReader*  reader, uint32_t  protocolVersion) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::IRemoteProcedureCall* Init(int64_t  syncTime, T0  value0) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Release() ;

static inline ::GlobalNamespace::RemoteProcedureCall_1<T0>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteProcedureCall_1(RemoteProcedureCall_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteProcedureCall_1(RemoteProcedureCall_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RemoteProcedureCall_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RemoteProcedureCall_1, "", "RemoteProcedureCall`1");
