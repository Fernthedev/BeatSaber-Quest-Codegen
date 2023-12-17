#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CompatibleComparer)
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IHashCodeProvider;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEqualityComparer;
}
// Forward declare root types
namespace System::Collections {
class CompatibleComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::CompatibleComparer);
// Type: System.Collections::CompatibleComparer
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3770))
// CS Name: ::System.Collections::CompatibleComparer*
class CORDL_TYPE CompatibleComparer : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _hcp offset 0x10
 __declspec(property(get=__get__hcp, put=__set__hcp)) ::System::Collections::IHashCodeProvider*  _hcp;

/// @brief Field _comparer offset 0x18
 __declspec(property(get=__get__comparer, put=__set__comparer)) ::System::Collections::IComparer*  _comparer;

 __declspec(property(get=get_HashCodeProvider)) ::System::Collections::IHashCodeProvider*  HashCodeProvider;

 __declspec(property(get=get_Comparer)) ::System::Collections::IComparer*  Comparer;

/// @brief Convert operator to "::System::Collections::IEqualityComparer"
constexpr operator  ::System::Collections::IEqualityComparer*() noexcept;

constexpr void __set__hcp(::System::Collections::IHashCodeProvider*  value) ;

constexpr ::System::Collections::IHashCodeProvider* __get__hcp() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IHashCodeProvider*> __get__hcp() const;

constexpr void __set__comparer(::System::Collections::IComparer*  value) ;

constexpr ::System::Collections::IComparer* __get__comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IComparer*> __get__comparer() const;

static inline ::System::Collections::CompatibleComparer* New_ctor(::System::Collections::IHashCodeProvider*  hashCodeProvider, ::System::Collections::IComparer*  comparer) ;

/// @brief Method .ctor addr 0x257da38 size 0x2c virtual false final false
inline void _ctor(::System::Collections::IHashCodeProvider*  hashCodeProvider, ::System::Collections::IComparer*  comparer) ;

/// @brief Method get_HashCodeProvider addr 0x257da64 size 0x8 virtual false final false
inline ::System::Collections::IHashCodeProvider* get_HashCodeProvider() ;

/// @brief Method get_Comparer addr 0x257da6c size 0x8 virtual false final false
inline ::System::Collections::IComparer* get_Comparer() ;

/// @brief Method Equals addr 0x257da74 size 0x18 virtual true final true
inline bool Equals(::System::Object*  a, ::System::Object*  b) ;

/// @brief Method Compare addr 0x257da8c size 0x1c4 virtual false final false
inline int32_t Compare(::System::Object*  a, ::System::Object*  b) ;

/// @brief Method GetHashCode addr 0x257dc50 size 0x10c virtual true final true
inline int32_t GetHashCode(::System::Object*  obj) ;

// Ctor Parameters [CppParam { name: "", ty: "CompatibleComparer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CompatibleComparer(CompatibleComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CompatibleComparer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CompatibleComparer(CompatibleComparer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CompatibleComparer()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::CompatibleComparer, 0x20>, "Size mismatch!");

} // namespace end def System::Collections
NEED_NO_BOX(::System::Collections::CompatibleComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::CompatibleComparer*, "System.Collections", "CompatibleComparer");
