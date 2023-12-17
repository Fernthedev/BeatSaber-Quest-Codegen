#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Library)
namespace ENet {
class Callbacks;
}
// Forward declare root types
namespace ENet {
class Library;
}
// Write type traits
MARK_REF_PTR_T(::ENet::Library);
// Type: ENet::Library
namespace ENet {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15236))
// CS Name: ::ENet::Library*
class CORDL_TYPE Library : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field maxChannelCount offset 0x0
static constexpr uint32_t  maxChannelCount{static_cast<uint32_t>(0xff8fff80u)};

/// @brief Field maxPeers offset 0x0
static constexpr uint32_t  maxPeers{static_cast<uint32_t>(0xc2ff8fu)};

/// @brief Field maxPacketSize offset 0x0
static constexpr uint32_t  maxPacketSize{static_cast<uint32_t>(0xc2u)};

/// @brief Field throttleThreshold offset 0x0
static constexpr uint32_t  throttleThreshold{static_cast<uint32_t>(0x2022028u)};

/// @brief Field throttleScale offset 0x0
static constexpr uint32_t  throttleScale{static_cast<uint32_t>(0x93020220u)};

/// @brief Field throttleAcceleration offset 0x0
static constexpr uint32_t  throttleAcceleration{static_cast<uint32_t>(0x88930202u)};

/// @brief Field throttleDeceleration offset 0x0
static constexpr uint32_t  throttleDeceleration{static_cast<uint32_t>(0x20889302u)};

/// @brief Field throttleInterval offset 0x0
static constexpr uint32_t  throttleInterval{static_cast<uint32_t>(0x93208893u)};

/// @brief Field timeoutLimit offset 0x0
static constexpr uint32_t  timeoutLimit{static_cast<uint32_t>(0xc0889320u)};

/// @brief Field timeoutMinimum offset 0x0
static constexpr uint32_t  timeoutMinimum{static_cast<uint32_t>(0xc08893u)};

/// @brief Field timeoutMaximum offset 0x0
static constexpr uint32_t  timeoutMaximum{static_cast<uint32_t>(0x307500c0u)};

/// @brief Field version offset 0x0
static constexpr uint32_t  version{static_cast<uint32_t>(0x70402c0u)};

/// @brief Method get_Time addr 0x21f3b64 size 0x4 virtual false final false
static inline uint32_t get_Time() ;

/// @brief Method InitOpenSSL addr 0x21f3bd0 size 0x64 virtual false final false
static inline void InitOpenSSL() ;

/// @brief Method Initialize addr 0x21f3d38 size 0x7c virtual false final false
static inline bool Initialize() ;

/// @brief Method Initialize addr 0x21f3e84 size 0xf0 virtual false final false
static inline bool Initialize(::ENet::Callbacks*  callbacks) ;

/// @brief Method Deinitialize addr 0x21f4038 size 0x4 virtual false final false
static inline void Deinitialize() ;

/// @brief Method CRC64 addr 0x21f40a0 size 0x4 virtual false final false
static inline uint64_t CRC64(::cordl_internals::intptr_t  buffers, int32_t  bufferCount) ;

// Ctor Parameters [CppParam { name: "", ty: "Library", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Library(Library && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Library", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Library(Library const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Library()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::Library, 0x10>, "Size mismatch!");

} // namespace end def ENet
NEED_NO_BOX(::ENet::Library);
DEFINE_IL2CPP_ARG_TYPE(::ENet::Library*, "ENet", "Library");
