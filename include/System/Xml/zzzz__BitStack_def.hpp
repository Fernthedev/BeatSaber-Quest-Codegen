#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BitStack)
// Forward declare root types
namespace System::Xml {
class BitStack;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::BitStack);
// Type: System.Xml::BitStack
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11408))
// CS Name: ::System.Xml::BitStack*
class CORDL_TYPE BitStack : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field bitStack offset 0x10
 __declspec(property(get=__get_bitStack, put=__set_bitStack)) ::ArrayW<uint32_t,::Array<uint32_t>*>  bitStack;

/// @brief Field stackPos offset 0x18
 __declspec(property(get=__get_stackPos, put=__set_stackPos)) int32_t  stackPos;

/// @brief Field curr offset 0x1c
 __declspec(property(get=__get_curr, put=__set_curr)) uint32_t  curr;

constexpr void __set_bitStack(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get_bitStack() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get_bitStack() const;

constexpr void __set_stackPos(int32_t  value) ;

constexpr int32_t& __get_stackPos() ;

constexpr int32_t const& __get_stackPos() const;

constexpr void __set_curr(uint32_t  value) ;

constexpr uint32_t& __get_curr() ;

constexpr uint32_t const& __get_curr() const;

static inline ::System::Xml::BitStack* New_ctor() ;

/// @brief Method .ctor addr 0x284e538 size 0x20 virtual false final false
inline void _ctor() ;

/// @brief Method PushBit addr 0x284e558 size 0x38 virtual false final false
inline void PushBit(bool  bit) ;

/// @brief Method PopBit addr 0x284e658 size 0x28 virtual false final false
inline bool PopBit() ;

/// @brief Method PeekBit addr 0x284e6c4 size 0xc virtual false final false
inline bool PeekBit() ;

/// @brief Method PushCurr addr 0x284e590 size 0xc8 virtual false final false
inline void PushCurr() ;

/// @brief Method PopCurr addr 0x284e680 size 0x44 virtual false final false
inline void PopCurr() ;

// Ctor Parameters [CppParam { name: "", ty: "BitStack", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BitStack(BitStack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BitStack", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BitStack(BitStack const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BitStack()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::BitStack, 0x20>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::BitStack);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::BitStack*, "System.Xml", "BitStack");
