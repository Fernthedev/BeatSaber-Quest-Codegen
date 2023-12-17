#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPv6AddressHelper)
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace System {
class IPv6AddressHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::IPv6AddressHelper);
// Type: System::IPv6AddressHelper
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8862))
// CS Name: ::System::IPv6AddressHelper*
class CORDL_TYPE IPv6AddressHelper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method FindCompressionRange addr 0x294530c size 0xe0 virtual false final false
static inline ::System::ValueTuple_2<int32_t,int32_t> FindCompressionRange(::System::ReadOnlySpan_1<uint16_t>  numbers) ;

/// @brief Method ShouldHaveIpv4Embedded addr 0x29453ec size 0xd0 virtual false final false
static inline bool ShouldHaveIpv4Embedded(::System::ReadOnlySpan_1<uint16_t>  numbers) ;

/// @brief Method IsValidStrict addr 0x29454bc size 0x344 virtual false final false
static inline bool IsValidStrict(::cordl_internals::Ptr<char16_t>  name, int32_t  start, ByRef<int32_t>  end) ;

/// @brief Method Parse addr 0x2945800 size 0x50c virtual false final false
static inline void Parse(::System::ReadOnlySpan_1<char16_t>  address, ::cordl_internals::Ptr<uint16_t>  numbers, int32_t  start, ByRef<::StringW>  scopeId) ;

/// @brief Method ParseCanonicalName addr 0x2945d0c size 0x63c virtual false final false
static inline ::StringW ParseCanonicalName(::StringW  str, int32_t  start, ByRef<bool>  isLoopback, ByRef<::StringW>  scopeId) ;

/// @brief Method IsLoopback addr 0x2946348 size 0xe0 virtual false final false
static inline bool IsLoopback(::System::ReadOnlySpan_1<uint16_t>  numbers) ;

/// @brief Method InternalIsValid addr 0x2946428 size 0x2dc virtual false final false
static inline bool InternalIsValid(::cordl_internals::Ptr<char16_t>  name, int32_t  start, ByRef<int32_t>  end, bool  validateStrictAddress) ;

/// @brief Method IsValid addr 0x2946704 size 0x8 virtual false final false
static inline bool IsValid(::cordl_internals::Ptr<char16_t>  name, int32_t  start, ByRef<int32_t>  end) ;

// Ctor Parameters [CppParam { name: "", ty: "IPv6AddressHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IPv6AddressHelper(IPv6AddressHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IPv6AddressHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPv6AddressHelper(IPv6AddressHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IPv6AddressHelper()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IPv6AddressHelper, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::IPv6AddressHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::IPv6AddressHelper*, "System", "IPv6AddressHelper");
