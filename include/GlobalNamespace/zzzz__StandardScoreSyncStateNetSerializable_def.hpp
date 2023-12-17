#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StandardScoreSyncStateNetSerializable)
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
template<typename T>
class ISyncStateSerializable_1;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
struct SyncStateId;
}
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
namespace GlobalNamespace {
template<typename T>
class PacketPool_1;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardScoreSyncStateNetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardScoreSyncStateNetSerializable);
// Type: ::StandardScoreSyncStateNetSerializable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12980))
// CS Name: ::StandardScoreSyncStateNetSerializable*
class CORDL_TYPE StandardScoreSyncStateNetSerializable : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _state offset 0x10
 __declspec(property(get=__get__state, put=__set__state)) ::GlobalNamespace::StandardScoreSyncState  _state;

/// @brief Field <id>k__BackingField offset 0x24
 __declspec(property(get=__get__id_k__BackingField, put=__set__id_k__BackingField)) ::GlobalNamespace::SyncStateId  _id_k__BackingField;

/// @brief Field <time>k__BackingField offset 0x28
 __declspec(property(get=__get__time_k__BackingField, put=__set__time_k__BackingField)) int64_t  _time_k__BackingField;

 __declspec(property(get=get_id, put=set_id)) ::GlobalNamespace::SyncStateId  id;

 __declspec(property(get=get_time, put=set_time)) int64_t  time;

 __declspec(property(get=get_state, put=set_state)) ::GlobalNamespace::StandardScoreSyncState  state;

/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr operator  ::LiteNetLib::Utils::INetSerializable*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr operator  ::GlobalNamespace::IPoolablePacket*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::StandardScoreSyncState>"
constexpr operator  ::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::StandardScoreSyncState>*() noexcept;

constexpr void __set__state(::GlobalNamespace::StandardScoreSyncState  value) ;

constexpr ::GlobalNamespace::StandardScoreSyncState& __get__state() ;

constexpr ::GlobalNamespace::StandardScoreSyncState const& __get__state() const;

constexpr void __set__id_k__BackingField(::GlobalNamespace::SyncStateId  value) ;

constexpr ::GlobalNamespace::SyncStateId& __get__id_k__BackingField() ;

constexpr ::GlobalNamespace::SyncStateId const& __get__id_k__BackingField() const;

constexpr void __set__time_k__BackingField(int64_t  value) ;

constexpr int64_t& __get__time_k__BackingField() ;

constexpr int64_t const& __get__time_k__BackingField() const;

/// @brief Method get_pool addr 0xe5aabc size 0x40 virtual false final false
static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>* get_pool() ;

/// @brief Method get_id addr 0xe5aafc size 0x8 virtual true final true
inline ::GlobalNamespace::SyncStateId get_id() ;

/// @brief Method set_id addr 0xe5ab04 size 0x8 virtual true final true
inline void set_id(::GlobalNamespace::SyncStateId  value) ;

/// @brief Method get_time addr 0xe5ab0c size 0x8 virtual true final true
inline int64_t get_time() ;

/// @brief Method set_time addr 0xe5ab14 size 0x8 virtual true final true
inline void set_time(int64_t  value) ;

/// @brief Method get_state addr 0xe5ab1c size 0x14 virtual true final true
inline ::GlobalNamespace::StandardScoreSyncState get_state() ;

/// @brief Method set_state addr 0xe5ab30 size 0x14 virtual true final true
inline void set_state(::GlobalNamespace::StandardScoreSyncState  value) ;

/// @brief Method Serialize addr 0xe5ab44 size 0x4c virtual true final true
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method Deserialize addr 0xe5ab90 size 0x50 virtual true final true
inline void Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

/// @brief Method Release addr 0xe5abe0 size 0x54 virtual true final true
inline void Release() ;

static inline ::GlobalNamespace::StandardScoreSyncStateNetSerializable* New_ctor() ;

/// @brief Method .ctor addr 0xe5ac34 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "StandardScoreSyncStateNetSerializable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StandardScoreSyncStateNetSerializable(StandardScoreSyncStateNetSerializable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandardScoreSyncStateNetSerializable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandardScoreSyncStateNetSerializable(StandardScoreSyncStateNetSerializable const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StandardScoreSyncStateNetSerializable()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardScoreSyncStateNetSerializable, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardScoreSyncStateNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardScoreSyncStateNetSerializable*, "", "StandardScoreSyncStateNetSerializable");
