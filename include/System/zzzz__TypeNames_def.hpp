#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeNames)
namespace System {
class __TypeNames__ATypeName;
}
namespace System {
class Object;
}
namespace System {
class TypeName;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace System {
class TypeNames;
}
namespace System {
class __TypeNames__ATypeName;
}
// Write type traits
MARK_REF_PTR_T(::System::TypeNames);
MARK_REF_PTR_T(::System::__TypeNames__ATypeName);
// Type: ::ATypeName
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2629))
// CS Name: ::TypeNames::ATypeName*
class CORDL_TYPE __TypeNames__ATypeName : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

 __declspec(property(get=get_DisplayName)) ::StringW  DisplayName;

/// @brief Convert operator to "::System::TypeName"
constexpr operator  ::System::TypeName*() noexcept;

/// @brief Convert operator to "::System::IEquatable_1<::System::TypeName*>"
constexpr operator  ::System::IEquatable_1<::System::TypeName*>*() noexcept;

/// @brief Method get_DisplayName addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_DisplayName() ;

/// @brief Method Equals addr 0x2606728 size 0xd0 virtual true final true
inline bool Equals(::System::TypeName*  other) ;

/// @brief Method GetHashCode addr 0x26067f8 size 0x28 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2606820 size 0x60 virtual true final false
inline bool Equals(::System::Object*  other) ;

static inline ::System::__TypeNames__ATypeName* New_ctor() ;

/// @brief Method .ctor addr 0x2606880 size 0x4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__TypeNames__ATypeName", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TypeNames__ATypeName(__TypeNames__ATypeName && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TypeNames__ATypeName", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TypeNames__ATypeName(__TypeNames__ATypeName const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TypeNames__ATypeName()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__TypeNames__ATypeName, 0x10>, "Size mismatch!");

} // namespace end def System
// Type: System::TypeNames
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2630))
// CS Name: ::System::TypeNames*
class CORDL_TYPE TypeNames : public ::System::Object {
public:
// Declarations
using ATypeName = ::System::__TypeNames__ATypeName;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

// Ctor Parameters [CppParam { name: "", ty: "TypeNames", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeNames(TypeNames && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeNames", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeNames(TypeNames const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TypeNames()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TypeNames, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::TypeNames);
DEFINE_IL2CPP_ARG_TYPE(::System::TypeNames*, "System", "TypeNames");
NEED_NO_BOX(::System::__TypeNames__ATypeName);
DEFINE_IL2CPP_ARG_TYPE(::System::__TypeNames__ATypeName*, "System", "TypeNames/ATypeName");
