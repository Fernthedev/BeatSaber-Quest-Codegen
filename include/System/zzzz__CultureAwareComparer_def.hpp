#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__StringComparer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CultureAwareComparer)
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Globalization {
struct CompareOptions;
}
namespace System::Globalization {
class CompareInfo;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
class CultureAwareComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::CultureAwareComparer);
// Type: System::CultureAwareComparer
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2474))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2475))
// CS Name: ::System::CultureAwareComparer*
class CORDL_TYPE CultureAwareComparer : public ::System::StringComparer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::StringComparer)]{};

/// @brief Field _compareInfo offset 0x10
 __declspec(property(get=__get__compareInfo, put=__set__compareInfo)) ::System::Globalization::CompareInfo*  _compareInfo;

/// @brief Field _options offset 0x18
 __declspec(property(get=__get__options, put=__set__options)) ::System::Globalization::CompareOptions  _options;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

constexpr void __set__compareInfo(::System::Globalization::CompareInfo*  value) ;

constexpr ::System::Globalization::CompareInfo* __get__compareInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CompareInfo*> __get__compareInfo() const;

constexpr void __set__options(::System::Globalization::CompareOptions  value) ;

constexpr ::System::Globalization::CompareOptions& __get__options() ;

constexpr ::System::Globalization::CompareOptions const& __get__options() const;

static inline ::System::CultureAwareComparer* New_ctor(::System::Globalization::CultureInfo*  culture, ::System::Globalization::CompareOptions  options) ;

/// @brief Method .ctor addr 0x25c534c size 0x44 virtual false final false
inline void _ctor(::System::Globalization::CultureInfo*  culture, ::System::Globalization::CompareOptions  options) ;

static inline ::System::CultureAwareComparer* New_ctor(::System::Globalization::CompareInfo*  compareInfo, ::System::Globalization::CompareOptions  options) ;

/// @brief Method .ctor addr 0x25c53a0 size 0xe4 virtual false final false
inline void _ctor(::System::Globalization::CompareInfo*  compareInfo, ::System::Globalization::CompareOptions  options) ;

static inline ::System::CultureAwareComparer* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x25c5484 size 0x20c virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method Compare addr 0x25c5690 size 0x54 virtual true final false
inline int32_t Compare(::StringW  x, ::StringW  y) ;

/// @brief Method Equals addr 0x25c56e4 size 0x50 virtual true final false
inline bool Equals(::StringW  x, ::StringW  y) ;

/// @brief Method GetHashCode addr 0x25c5734 size 0x74 virtual true final false
inline int32_t GetHashCode(::StringW  obj) ;

/// @brief Method Equals addr 0x25c57a8 size 0x98 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x25c5840 size 0x34 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method GetObjectData addr 0x25c5874 size 0xec virtual true final true
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "", ty: "CultureAwareComparer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CultureAwareComparer(CultureAwareComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CultureAwareComparer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CultureAwareComparer(CultureAwareComparer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CultureAwareComparer()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::CultureAwareComparer, 0x20>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::CultureAwareComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::CultureAwareComparer*, "System", "CultureAwareComparer");
