#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PoolableSerializable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayersMissingEntitlementsNetSerializable)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayersMissingEntitlementsNetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable);
// Type: ::PlayersMissingEntitlementsNetSerializable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15033))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15032))
// CS Name: ::PlayersMissingEntitlementsNetSerializable*
class CORDL_TYPE PlayersMissingEntitlementsNetSerializable : public ::GlobalNamespace::PoolableSerializable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::PoolableSerializable)]{};

/// @brief Field _playersWithoutEntitlements offset 0x18
 __declspec(property(get=__get__playersWithoutEntitlements, put=__set__playersWithoutEntitlements)) ::System::Collections::Generic::List_1<::StringW>*  _playersWithoutEntitlements;

 __declspec(property(get=get_playersWithoutEntitlements)) ::System::Collections::Generic::List_1<::StringW>*  playersWithoutEntitlements;

constexpr void __set__playersWithoutEntitlements(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::List_1<::StringW>* __get__playersWithoutEntitlements() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> __get__playersWithoutEntitlements() const;

/// @brief Method get_playersWithoutEntitlements addr 0x12a5dbc size 0x8 virtual false final false
inline ::System::Collections::Generic::List_1<::StringW>* get_playersWithoutEntitlements() ;

/// @brief Method Obtain addr 0x12a5dc4 size 0x64 virtual false final false
static inline ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* Obtain() ;

static inline ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* New_ctor() ;

/// @brief Method .ctor addr 0x12a5e28 size 0xa0 virtual false final false
inline void _ctor() ;

/// @brief Method Init addr 0x12a5ec8 size 0x98 virtual false final false
inline ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* Init(::System::Collections::Generic::IEnumerable_1<::StringW>*  playersWithoutEntitlements) ;

/// @brief Method Serialize addr 0x12a5f60 size 0x160 virtual true final false
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method Deserialize addr 0x12a60c0 size 0x118 virtual true final false
inline void Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

// Ctor Parameters [CppParam { name: "", ty: "PlayersMissingEntitlementsNetSerializable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayersMissingEntitlementsNetSerializable(PlayersMissingEntitlementsNetSerializable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayersMissingEntitlementsNetSerializable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayersMissingEntitlementsNetSerializable(PlayersMissingEntitlementsNetSerializable const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PlayersMissingEntitlementsNetSerializable()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*, "", "PlayersMissingEntitlementsNetSerializable");
