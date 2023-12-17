#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteProcedureCall)
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
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
namespace GlobalNamespace {
struct SongPackMask;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class __RemoteProcedureCall__TypeWrapper_1;
}
namespace GlobalNamespace {
class RemoteProcedureCall;
}
namespace GlobalNamespace {
template<>
class __RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>;
}
namespace GlobalNamespace {
template<>
class __RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>;
}
namespace GlobalNamespace {
template<>
class __RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>;
}
namespace GlobalNamespace {
template<>
class __RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
class __RemoteProcedureCall__TypeWrapper_1<T>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class __RemoteProcedureCall__TypeWrapper_1<T>;
}
namespace GlobalNamespace {
template<>
class __RemoteProcedureCall__TypeWrapper_1<bool>;
}
namespace GlobalNamespace {
template<>
class __RemoteProcedureCall__TypeWrapper_1<float_t>;
}
namespace GlobalNamespace {
template<>
class __RemoteProcedureCall__TypeWrapper_1<int32_t>;
}
namespace GlobalNamespace {
template<>
class __RemoteProcedureCall__TypeWrapper_1<int64_t>;
}
namespace GlobalNamespace {
template<>
class __RemoteProcedureCall__TypeWrapper_1<uint8_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1);
MARK_REF_PTR_T(::GlobalNamespace::RemoteProcedureCall);
// Type: ::TypeWrapper`1
// Type: ::RemoteProcedureCall
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12936))
// CS Name: ::RemoteProcedureCall*
class CORDL_TYPE RemoteProcedureCall : public ::System::Object {
public:
// Declarations
template<typename T>
using TypeWrapper_1 = ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field <syncTime>k__BackingField offset 0x10
 __declspec(property(get=__get__syncTime_k__BackingField, put=__set__syncTime_k__BackingField)) int64_t  _syncTime_k__BackingField;

 __declspec(property(get=get_syncTime, put=set_syncTime)) int64_t  syncTime;

/// @brief Convert operator to "::GlobalNamespace::IRemoteProcedureCall"
constexpr operator  ::GlobalNamespace::IRemoteProcedureCall*() noexcept;

/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr operator  ::LiteNetLib::Utils::INetSerializable*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr operator  ::GlobalNamespace::IPoolablePacket*() noexcept;

constexpr void __set__syncTime_k__BackingField(int64_t  value) ;

constexpr int64_t& __get__syncTime_k__BackingField() ;

constexpr int64_t const& __get__syncTime_k__BackingField() const;

/// @brief Method get_syncTime addr 0xe543f4 size 0x8 virtual true final true
inline int64_t get_syncTime() ;

/// @brief Method set_syncTime addr 0xe543fc size 0x8 virtual false final false
inline void set_syncTime(int64_t  value) ;

/// @brief Method SerializeData addr 0xe54404 size 0x4 virtual true final false
inline void SerializeData(::LiteNetLib::Utils::NetDataWriter*  writer, uint32_t  protocolVersion) ;

/// @brief Method DeserializeData addr 0xe54408 size 0x4 virtual true final false
inline void DeserializeData(::LiteNetLib::Utils::NetDataReader*  reader, uint32_t  protocolVersion) ;

/// @brief Method LiteNetLib.Utils.INetSerializable.Serialize addr 0xe5440c size 0x44 virtual true final true
inline void LiteNetLib_Utils_INetSerializable_Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method LiteNetLib.Utils.INetSerializable.Deserialize addr 0xe54450 size 0x40 virtual true final true
inline void LiteNetLib_Utils_INetSerializable_Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

/// @brief Method Release addr 0xe54490 size 0x4 virtual true final false
inline void Release() ;

/// @brief Method Init addr 0xe54590 size 0x8 virtual false final false
inline ::GlobalNamespace::IRemoteProcedureCall* Init(int64_t  syncTime) ;

static inline ::GlobalNamespace::RemoteProcedureCall* New_ctor() ;

/// @brief Method .ctor addr 0xe49244 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteProcedureCall(RemoteProcedureCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteProcedureCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteProcedureCall(RemoteProcedureCall const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RemoteProcedureCall()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RemoteProcedureCall, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::TypeWrapper`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12935)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12935), inst: 3352 })
// CS Name: ::RemoteProcedureCall::TypeWrapper`1<T>*
class CORDL_TYPE __RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _v offset 0x10
 __declspec(property(get=__get__v, put=__set__v)) ::GlobalNamespace::SongPackMask  _v;

 __declspec(property(get=get_hasValue)) bool  hasValue;

 __declspec(property(get=get_value)) ::GlobalNamespace::SongPackMask  value;

constexpr void __set__v(::GlobalNamespace::SongPackMask  value) ;

constexpr ::GlobalNamespace::SongPackMask& __get__v() ;

constexpr ::GlobalNamespace::SongPackMask const& __get__v() const;

/// @brief Method get_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_hasValue() ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::SongPackMask get_value() ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Set(::GlobalNamespace::SongPackMask  v) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release() ;

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

static inline ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::GlobalNamespace::SongPackMask>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__RemoteProcedureCall__TypeWrapper_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RemoteProcedureCall__TypeWrapper_1(__RemoteProcedureCall__TypeWrapper_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RemoteProcedureCall__TypeWrapper_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RemoteProcedureCall__TypeWrapper_1(__RemoteProcedureCall__TypeWrapper_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RemoteProcedureCall__TypeWrapper_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TypeWrapper`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12935)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12935), inst: 3342 })
// CS Name: ::RemoteProcedureCall::TypeWrapper`1<T>*
class CORDL_TYPE __RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _v offset 0x10
 __declspec(property(get=__get__v, put=__set__v)) ::UnityEngine::Quaternion  _v;

 __declspec(property(get=get_hasValue)) bool  hasValue;

 __declspec(property(get=get_value)) ::UnityEngine::Quaternion  value;

constexpr void __set__v(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get__v() ;

constexpr ::UnityEngine::Quaternion const& __get__v() const;

/// @brief Method get_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_hasValue() ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Quaternion get_value() ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Set(::UnityEngine::Quaternion  v) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release() ;

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

static inline ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Quaternion>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__RemoteProcedureCall__TypeWrapper_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RemoteProcedureCall__TypeWrapper_1(__RemoteProcedureCall__TypeWrapper_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RemoteProcedureCall__TypeWrapper_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RemoteProcedureCall__TypeWrapper_1(__RemoteProcedureCall__TypeWrapper_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RemoteProcedureCall__TypeWrapper_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TypeWrapper`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(12935))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12935), inst: 974 })
// CS Name: ::RemoteProcedureCall::TypeWrapper`1<T>*
class CORDL_TYPE __RemoteProcedureCall__TypeWrapper_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _v offset 0x10
 __declspec(property(get=__get__v, put=__set__v)) T  _v;

 __declspec(property(get=get_hasValue)) bool  hasValue;

 __declspec(property(get=get_value)) T  value;

constexpr void __set__v(T  value) ;

constexpr T& __get__v() ;

constexpr T const& __get__v() const;

/// @brief Method get_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_hasValue() ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_value() ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Set(T  v) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release() ;

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

static inline ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__RemoteProcedureCall__TypeWrapper_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RemoteProcedureCall__TypeWrapper_1(__RemoteProcedureCall__TypeWrapper_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RemoteProcedureCall__TypeWrapper_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RemoteProcedureCall__TypeWrapper_1(__RemoteProcedureCall__TypeWrapper_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RemoteProcedureCall__TypeWrapper_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TypeWrapper`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12935)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12935), inst: 755 })
// CS Name: ::RemoteProcedureCall::TypeWrapper`1<T>*
class CORDL_TYPE __RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _v offset 0x10
 __declspec(property(get=__get__v, put=__set__v)) ::UnityEngine::Vector4  _v;

 __declspec(property(get=get_hasValue)) bool  hasValue;

 __declspec(property(get=get_value)) ::UnityEngine::Vector4  value;

constexpr void __set__v(::UnityEngine::Vector4  value) ;

constexpr ::UnityEngine::Vector4& __get__v() ;

constexpr ::UnityEngine::Vector4 const& __get__v() const;

/// @brief Method get_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_hasValue() ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector4 get_value() ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Set(::UnityEngine::Vector4  v) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release() ;

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

static inline ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector4>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__RemoteProcedureCall__TypeWrapper_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RemoteProcedureCall__TypeWrapper_1(__RemoteProcedureCall__TypeWrapper_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RemoteProcedureCall__TypeWrapper_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RemoteProcedureCall__TypeWrapper_1(__RemoteProcedureCall__TypeWrapper_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RemoteProcedureCall__TypeWrapper_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TypeWrapper`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12935)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12935), inst: 741 })
// CS Name: ::RemoteProcedureCall::TypeWrapper`1<T>*
class CORDL_TYPE __RemoteProcedureCall__TypeWrapper_1<uint8_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _v offset 0x10
 __declspec(property(get=__get__v, put=__set__v)) uint8_t  _v;

 __declspec(property(get=get_hasValue)) bool  hasValue;

 __declspec(property(get=get_value)) uint8_t  value;

constexpr void __set__v(uint8_t  value) ;

constexpr uint8_t& __get__v() ;

constexpr uint8_t const& __get__v() const;

/// @brief Method get_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_hasValue() ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint8_t get_value() ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Set(uint8_t  v) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release() ;

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

static inline ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<uint8_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__RemoteProcedureCall__TypeWrapper_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RemoteProcedureCall__TypeWrapper_1(__RemoteProcedureCall__TypeWrapper_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RemoteProcedureCall__TypeWrapper_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RemoteProcedureCall__TypeWrapper_1(__RemoteProcedureCall__TypeWrapper_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RemoteProcedureCall__TypeWrapper_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TypeWrapper`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12935)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12935), inst: 412 })
// CS Name: ::RemoteProcedureCall::TypeWrapper`1<T>*
class CORDL_TYPE __RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _v offset 0x10
 __declspec(property(get=__get__v, put=__set__v)) ::UnityEngine::Vector3  _v;

 __declspec(property(get=get_hasValue)) bool  hasValue;

 __declspec(property(get=get_value)) ::UnityEngine::Vector3  value;

constexpr void __set__v(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__v() ;

constexpr ::UnityEngine::Vector3 const& __get__v() const;

/// @brief Method get_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_hasValue() ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector3 get_value() ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Set(::UnityEngine::Vector3  v) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release() ;

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

static inline ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<::UnityEngine::Vector3>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__RemoteProcedureCall__TypeWrapper_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RemoteProcedureCall__TypeWrapper_1(__RemoteProcedureCall__TypeWrapper_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RemoteProcedureCall__TypeWrapper_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RemoteProcedureCall__TypeWrapper_1(__RemoteProcedureCall__TypeWrapper_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RemoteProcedureCall__TypeWrapper_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TypeWrapper`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12935)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12935), inst: 391 })
// CS Name: ::RemoteProcedureCall::TypeWrapper`1<T>*
class CORDL_TYPE __RemoteProcedureCall__TypeWrapper_1<float_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _v offset 0x10
 __declspec(property(get=__get__v, put=__set__v)) float_t  _v;

 __declspec(property(get=get_hasValue)) bool  hasValue;

 __declspec(property(get=get_value)) float_t  value;

constexpr void __set__v(float_t  value) ;

constexpr float_t& __get__v() ;

constexpr float_t const& __get__v() const;

/// @brief Method get_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_hasValue() ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t get_value() ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Set(float_t  v) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release() ;

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

static inline ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__RemoteProcedureCall__TypeWrapper_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RemoteProcedureCall__TypeWrapper_1(__RemoteProcedureCall__TypeWrapper_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RemoteProcedureCall__TypeWrapper_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RemoteProcedureCall__TypeWrapper_1(__RemoteProcedureCall__TypeWrapper_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RemoteProcedureCall__TypeWrapper_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TypeWrapper`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(12935))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12935), inst: 333 })
// CS Name: ::RemoteProcedureCall::TypeWrapper`1<T>*
class CORDL_TYPE __RemoteProcedureCall__TypeWrapper_1<int64_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _v offset 0x10
 __declspec(property(get=__get__v, put=__set__v)) int64_t  _v;

 __declspec(property(get=get_hasValue)) bool  hasValue;

 __declspec(property(get=get_value)) int64_t  value;

constexpr void __set__v(int64_t  value) ;

constexpr int64_t& __get__v() ;

constexpr int64_t const& __get__v() const;

/// @brief Method get_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_hasValue() ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual false final false
inline int64_t get_value() ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Set(int64_t  v) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release() ;

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

static inline ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int64_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__RemoteProcedureCall__TypeWrapper_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RemoteProcedureCall__TypeWrapper_1(__RemoteProcedureCall__TypeWrapper_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RemoteProcedureCall__TypeWrapper_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RemoteProcedureCall__TypeWrapper_1(__RemoteProcedureCall__TypeWrapper_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RemoteProcedureCall__TypeWrapper_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TypeWrapper`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(12935))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12935), inst: 105 })
// CS Name: ::RemoteProcedureCall::TypeWrapper`1<T>*
class CORDL_TYPE __RemoteProcedureCall__TypeWrapper_1<bool> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _v offset 0x10
 __declspec(property(get=__get__v, put=__set__v)) bool  _v;

 __declspec(property(get=get_hasValue)) bool  hasValue;

 __declspec(property(get=get_value)) bool  value;

constexpr void __set__v(bool  value) ;

constexpr bool& __get__v() ;

constexpr bool const& __get__v() const;

/// @brief Method get_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_hasValue() ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_value() ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Set(bool  v) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release() ;

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

static inline ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<bool>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__RemoteProcedureCall__TypeWrapper_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RemoteProcedureCall__TypeWrapper_1(__RemoteProcedureCall__TypeWrapper_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RemoteProcedureCall__TypeWrapper_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RemoteProcedureCall__TypeWrapper_1(__RemoteProcedureCall__TypeWrapper_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RemoteProcedureCall__TypeWrapper_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TypeWrapper`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12935)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12935), inst: 98 })
// CS Name: ::RemoteProcedureCall::TypeWrapper`1<T>*
class CORDL_TYPE __RemoteProcedureCall__TypeWrapper_1<int32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _v offset 0x10
 __declspec(property(get=__get__v, put=__set__v)) int32_t  _v;

 __declspec(property(get=get_hasValue)) bool  hasValue;

 __declspec(property(get=get_value)) int32_t  value;

constexpr void __set__v(int32_t  value) ;

constexpr int32_t& __get__v() ;

constexpr int32_t const& __get__v() const;

/// @brief Method get_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_hasValue() ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_value() ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Set(int32_t  v) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release() ;

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

static inline ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__RemoteProcedureCall__TypeWrapper_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RemoteProcedureCall__TypeWrapper_1(__RemoteProcedureCall__TypeWrapper_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RemoteProcedureCall__TypeWrapper_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RemoteProcedureCall__TypeWrapper_1(__RemoteProcedureCall__TypeWrapper_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RemoteProcedureCall__TypeWrapper_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TypeWrapper`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12935)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12935), inst: 2 })
// CS Name: ::RemoteProcedureCall::TypeWrapper`1<T>*
class CORDL_TYPE __RemoteProcedureCall__TypeWrapper_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _v offset 0x10
 __declspec(property(get=__get__v, put=__set__v)) T  _v;

 __declspec(property(get=get_hasValue)) bool  hasValue;

 __declspec(property(get=get_value)) T  value;

constexpr void __set__v(T  value) ;

constexpr T& __get__v() ;

constexpr T const& __get__v() const;

/// @brief Method get_hasValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_hasValue() ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_value() ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Set(T  v) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release() ;

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

static inline ::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__RemoteProcedureCall__TypeWrapper_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RemoteProcedureCall__TypeWrapper_1(__RemoteProcedureCall__TypeWrapper_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RemoteProcedureCall__TypeWrapper_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RemoteProcedureCall__TypeWrapper_1(__RemoteProcedureCall__TypeWrapper_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RemoteProcedureCall__TypeWrapper_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__RemoteProcedureCall__TypeWrapper_1, "", "RemoteProcedureCall/TypeWrapper`1");
NEED_NO_BOX(::GlobalNamespace::RemoteProcedureCall);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RemoteProcedureCall*, "", "RemoteProcedureCall");
