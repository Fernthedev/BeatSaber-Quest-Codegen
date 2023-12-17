#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalVariableInfo)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class LocalVariableInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::LocalVariableInfo);
// Type: System.Reflection::LocalVariableInfo
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3516))
// CS Name: ::System.Reflection::LocalVariableInfo*
class CORDL_TYPE LocalVariableInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field type offset 0x10
 __declspec(property(get=__get_type, put=__set_type)) ::System::Type*  type;

/// @brief Field is_pinned offset 0x18
 __declspec(property(get=__get_is_pinned, put=__set_is_pinned)) bool  is_pinned;

/// @brief Field position offset 0x1a
 __declspec(property(get=__get_position, put=__set_position)) uint16_t  position;

constexpr void __set_type(::System::Type*  value) ;

constexpr ::System::Type* __get_type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_type() const;

constexpr void __set_is_pinned(bool  value) ;

constexpr bool& __get_is_pinned() ;

constexpr bool const& __get_is_pinned() const;

constexpr void __set_position(uint16_t  value) ;

constexpr uint16_t& __get_position() ;

constexpr uint16_t const& __get_position() const;

static inline ::System::Reflection::LocalVariableInfo* New_ctor() ;

/// @brief Method .ctor addr 0x24f1cc8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method ToString addr 0x24f1cd0 size 0xac virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "LocalVariableInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalVariableInfo(LocalVariableInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalVariableInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalVariableInfo(LocalVariableInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LocalVariableInfo()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::LocalVariableInfo, 0x20>, "Size mismatch!");

} // namespace end def System::Reflection
NEED_NO_BOX(::System::Reflection::LocalVariableInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::LocalVariableInfo*, "System.Reflection", "LocalVariableInfo");
