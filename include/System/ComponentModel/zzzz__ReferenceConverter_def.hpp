#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReferenceConverter)
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
namespace System::ComponentModel {
class __TypeConverter__StandardValuesCollection;
}
namespace System::ComponentModel {
class __ReferenceConverter__ReferenceComparer;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::Collections {
class IComparer;
}
// Forward declare root types
namespace System::ComponentModel {
class ReferenceConverter;
}
namespace System::ComponentModel {
class __ReferenceConverter__ReferenceComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ReferenceConverter);
MARK_REF_PTR_T(::System::ComponentModel::__ReferenceConverter__ReferenceComparer);
// Type: ::ReferenceComparer
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9448))
// CS Name: ::ReferenceConverter::ReferenceComparer*
class CORDL_TYPE __ReferenceConverter__ReferenceComparer : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _converter offset 0x10
 __declspec(property(get=__get__converter, put=__set__converter)) ::System::ComponentModel::ReferenceConverter*  _converter;

/// @brief Convert operator to "::System::Collections::IComparer"
constexpr operator  ::System::Collections::IComparer*() noexcept;

constexpr void __set__converter(::System::ComponentModel::ReferenceConverter*  value) ;

constexpr ::System::ComponentModel::ReferenceConverter* __get__converter() ;

constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ReferenceConverter*> __get__converter() const;

static inline ::System::ComponentModel::__ReferenceConverter__ReferenceComparer* New_ctor(::System::ComponentModel::ReferenceConverter*  converter) ;

/// @brief Method .ctor addr 0x2916934 size 0x28 virtual false final false
inline void _ctor(::System::ComponentModel::ReferenceConverter*  converter) ;

/// @brief Method Compare addr 0x2916a84 size 0xb0 virtual true final true
inline int32_t Compare(::System::Object*  item1, ::System::Object*  item2) ;

// Ctor Parameters [CppParam { name: "", ty: "__ReferenceConverter__ReferenceComparer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ReferenceConverter__ReferenceComparer(__ReferenceConverter__ReferenceComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ReferenceConverter__ReferenceComparer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ReferenceConverter__ReferenceComparer(__ReferenceConverter__ReferenceComparer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ReferenceConverter__ReferenceComparer()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__ReferenceConverter__ReferenceComparer, 0x18>, "Size mismatch!");

} // namespace end def System::ComponentModel
// Type: System.ComponentModel::ReferenceConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9449))
// CS Name: ::System.ComponentModel::ReferenceConverter*
class CORDL_TYPE ReferenceConverter : public ::System::ComponentModel::TypeConverter {
public:
// Declarations
using ReferenceComparer = ::System::ComponentModel::__ReferenceConverter__ReferenceComparer;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::ComponentModel::TypeConverter)]{};

/// @brief Field _type offset 0x10
 __declspec(property(get=__get__type, put=__set__type)) ::System::Type*  _type;

static inline void setStaticF_s_none(::StringW  value) ;

static inline ::StringW getStaticF_s_none() ;

constexpr void __set__type(::System::Type*  value) ;

constexpr ::System::Type* __get__type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__type() const;

static inline ::System::ComponentModel::ReferenceConverter* New_ctor(::System::Type*  type) ;

/// @brief Method .ctor addr 0x29155b4 size 0x28 virtual false final false
inline void _ctor(::System::Type*  type) ;

/// @brief Method CanConvertFrom addr 0x29155e4 size 0xb0 virtual true final false
inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Type*  sourceType) ;

/// @brief Method ConvertFrom addr 0x291571c size 0x338 virtual true final false
inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Globalization::CultureInfo*  culture, ::System::Object*  value) ;

/// @brief Method ConvertTo addr 0x2915ac0 size 0x44c virtual true final false
inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Globalization::CultureInfo*  culture, ::System::Object*  value, ::System::Type*  destinationType) ;

/// @brief Method GetStandardValues addr 0x2916144 size 0x7f0 virtual true final false
inline ::System::ComponentModel::__TypeConverter__StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext*  context) ;

/// @brief Method GetStandardValuesExclusive addr 0x2916a0c size 0x8 virtual true final false
inline bool GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext*  context) ;

/// @brief Method GetStandardValuesSupported addr 0x2916a14 size 0x8 virtual true final false
inline bool GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext*  context) ;

/// @brief Method IsValueAllowed addr 0x2916a1c size 0x8 virtual true final false
inline bool IsValueAllowed(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Object*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ReferenceConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReferenceConverter(ReferenceConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReferenceConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReferenceConverter(ReferenceConverter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ReferenceConverter()  = default;
public:


// Fields

// Static field s_none


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ReferenceConverter, 0x18>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ReferenceConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ReferenceConverter*, "System.ComponentModel", "ReferenceConverter");
NEED_NO_BOX(::System::ComponentModel::__ReferenceConverter__ReferenceComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__ReferenceConverter__ReferenceComparer*, "System.ComponentModel", "ReferenceConverter/ReferenceComparer");
