#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
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
namespace System::Collections {
class IEqualityComparer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Specialized {
class CompatibleComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Specialized::CompatibleComparer);
// Type: System.Collections.Specialized::CompatibleComparer
namespace System::Collections::Specialized {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9523))
// CS Name: ::System.Collections.Specialized::CompatibleComparer*
class CORDL_TYPE CompatibleComparer : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _comparer offset 0x10
 __declspec(property(get=__get__comparer, put=__set__comparer)) ::System::Collections::IComparer*  _comparer;

/// @brief Field _hcp offset 0x18
 __declspec(property(get=__get__hcp, put=__set__hcp)) ::System::Collections::IHashCodeProvider*  _hcp;

 __declspec(property(get=get_Comparer)) ::System::Collections::IComparer*  Comparer;

 __declspec(property(get=get_HashCodeProvider)) ::System::Collections::IHashCodeProvider*  HashCodeProvider;

/// @brief Convert operator to "::System::Collections::IEqualityComparer"
constexpr operator  ::System::Collections::IEqualityComparer*() noexcept;

constexpr void __set__comparer(::System::Collections::IComparer*  value) ;

constexpr ::System::Collections::IComparer* __get__comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IComparer*> __get__comparer() const;

static inline void setStaticF_defaultComparer(::System::Collections::IComparer*  value) ;

static inline ::System::Collections::IComparer* getStaticF_defaultComparer() ;

constexpr void __set__hcp(::System::Collections::IHashCodeProvider*  value) ;

constexpr ::System::Collections::IHashCodeProvider* __get__hcp() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IHashCodeProvider*> __get__hcp() const;

static inline void setStaticF_defaultHashProvider(::System::Collections::IHashCodeProvider*  value) ;

static inline ::System::Collections::IHashCodeProvider* getStaticF_defaultHashProvider() ;

static inline ::System::Collections::Specialized::CompatibleComparer* New_ctor(::System::Collections::IComparer*  comparer, ::System::Collections::IHashCodeProvider*  hashCodeProvider) ;

/// @brief Method .ctor addr 0x2940ef4 size 0x2c virtual false final false
inline void _ctor(::System::Collections::IComparer*  comparer, ::System::Collections::IHashCodeProvider*  hashCodeProvider) ;

/// @brief Method Equals addr 0x2941730 size 0x200 virtual true final true
inline bool Equals(::System::Object*  a, ::System::Object*  b) ;

/// @brief Method GetHashCode addr 0x2941930 size 0x10c virtual true final true
inline int32_t GetHashCode(::System::Object*  obj) ;

/// @brief Method get_Comparer addr 0x2941a3c size 0x8 virtual false final false
inline ::System::Collections::IComparer* get_Comparer() ;

/// @brief Method get_HashCodeProvider addr 0x2941a44 size 0x8 virtual false final false
inline ::System::Collections::IHashCodeProvider* get_HashCodeProvider() ;

/// @brief Method get_DefaultComparer addr 0x2940634 size 0xdc virtual false final false
static inline ::System::Collections::IComparer* get_DefaultComparer() ;

/// @brief Method get_DefaultHashCodeProvider addr 0x2940554 size 0xe0 virtual false final false
static inline ::System::Collections::IHashCodeProvider* get_DefaultHashCodeProvider() ;

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

// Static field defaultComparer

// Static field defaultHashProvider


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::CompatibleComparer, 0x20>, "Size mismatch!");

} // namespace end def System::Collections::Specialized
NEED_NO_BOX(::System::Collections::Specialized::CompatibleComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::CompatibleComparer*, "System.Collections.Specialized", "CompatibleComparer");
