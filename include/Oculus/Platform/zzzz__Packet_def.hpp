#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Packet)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Oculus::Platform {
class Packet;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Packet);
// Type: Oculus.Platform::Packet
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13343))
// CS Name: ::Oculus.Platform::Packet*
class CORDL_TYPE Packet : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field size offset 0x10
 __declspec(property(get=__get_size, put=__set_size)) uint64_t  size;

/// @brief Field packetHandle offset 0x18
 __declspec(property(get=__get_packetHandle, put=__set_packetHandle)) ::cordl_internals::intptr_t  packetHandle;

 __declspec(property(get=get_SenderID)) uint64_t  SenderID;

 __declspec(property(get=get_Size)) uint64_t  Size;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_size(uint64_t  value) ;

constexpr uint64_t& __get_size() ;

constexpr uint64_t const& __get_size() const;

constexpr void __set_packetHandle(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_packetHandle() ;

constexpr ::cordl_internals::intptr_t const& __get_packetHandle() const;

static inline ::Oculus::Platform::Packet* New_ctor(::cordl_internals::intptr_t  packetHandle) ;

/// @brief Method .ctor addr 0x26f49c0 size 0xb0 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  packetHandle) ;

/// @brief Method ReadBytes addr 0x26f4a70 size 0x144 virtual false final false
inline uint64_t ReadBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  destination) ;

/// @brief Method get_SenderID addr 0x26f4bb4 size 0x58 virtual false final false
inline uint64_t get_SenderID() ;

/// @brief Method get_Size addr 0x26f4c0c size 0x8 virtual false final false
inline uint64_t get_Size() ;

/// @brief Method Finalize addr 0x26f4c14 size 0x94 virtual true final false
inline void Finalize() ;

/// @brief Method Dispose addr 0x26f4ca8 size 0x88 virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "", ty: "Packet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Packet(Packet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Packet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Packet(Packet const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Packet()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Packet, 0x20>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Packet);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Packet*, "Oculus.Platform", "Packet");
