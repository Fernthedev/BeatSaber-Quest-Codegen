#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__EventDescriptor_def.hpp"
CORDL_MODULE_EXPORT(ReflectEventDescriptor)
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Type;
}
namespace System::Collections {
class IList;
}
namespace System::Reflection {
class EventInfo;
}
// Forward declare root types
namespace System::ComponentModel {
class ReflectEventDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ReflectEventDescriptor);
// Type: System.ComponentModel::ReflectEventDescriptor
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9423))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9450))
// CS Name: ::System.ComponentModel::ReflectEventDescriptor*
class CORDL_TYPE ReflectEventDescriptor : public ::System::ComponentModel::EventDescriptor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::ComponentModel::EventDescriptor)]{};

/// @brief Field _type offset 0x60
 __declspec(property(get=__get__type, put=__set__type)) ::System::Type*  _type;

/// @brief Field _componentClass offset 0x68
 __declspec(property(get=__get__componentClass, put=__set__componentClass)) ::System::Type*  _componentClass;

/// @brief Field _addMethod offset 0x70
 __declspec(property(get=__get__addMethod, put=__set__addMethod)) ::System::Reflection::MethodInfo*  _addMethod;

/// @brief Field _removeMethod offset 0x78
 __declspec(property(get=__get__removeMethod, put=__set__removeMethod)) ::System::Reflection::MethodInfo*  _removeMethod;

/// @brief Field _realEvent offset 0x80
 __declspec(property(get=__get__realEvent, put=__set__realEvent)) ::System::Reflection::EventInfo*  _realEvent;

/// @brief Field _filledMethods offset 0x88
 __declspec(property(get=__get__filledMethods, put=__set__filledMethods)) bool  _filledMethods;

constexpr void __set__type(::System::Type*  value) ;

constexpr ::System::Type* __get__type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__type() const;

constexpr void __set__componentClass(::System::Type*  value) ;

constexpr ::System::Type* __get__componentClass() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__componentClass() const;

constexpr void __set__addMethod(::System::Reflection::MethodInfo*  value) ;

constexpr ::System::Reflection::MethodInfo* __get__addMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> __get__addMethod() const;

constexpr void __set__removeMethod(::System::Reflection::MethodInfo*  value) ;

constexpr ::System::Reflection::MethodInfo* __get__removeMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> __get__removeMethod() const;

constexpr void __set__realEvent(::System::Reflection::EventInfo*  value) ;

constexpr ::System::Reflection::EventInfo* __get__realEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::EventInfo*> __get__realEvent() const;

constexpr void __set__filledMethods(bool  value) ;

constexpr bool& __get__filledMethods() ;

constexpr bool const& __get__filledMethods() const;

static inline ::System::ComponentModel::ReflectEventDescriptor* New_ctor(::System::Type*  componentClass, ::System::Reflection::EventInfo*  eventInfo) ;

/// @brief Method .ctor addr 0x2916c34 size 0x178 virtual false final false
inline void _ctor(::System::Type*  componentClass, ::System::Reflection::EventInfo*  eventInfo) ;

/// @brief Method FillAttributes addr 0x2916dac size 0x64 virtual true final false
inline void FillAttributes(::System::Collections::IList*  attributes) ;

/// @brief Method FillEventInfoAttribute addr 0x2917258 size 0x328 virtual false final false
inline void FillEventInfoAttribute(::System::Reflection::EventInfo*  realEventInfo, ::System::Collections::IList*  attributes) ;

/// @brief Method FillMethods addr 0x2916e10 size 0x448 virtual false final false
inline void FillMethods() ;

/// @brief Method FillSingleMethodAttribute addr 0x2917580 size 0x368 virtual false final false
inline void FillSingleMethodAttribute(::System::Reflection::MethodInfo*  realMethodInfo, ::System::Collections::IList*  attributes) ;

// Ctor Parameters [CppParam { name: "", ty: "ReflectEventDescriptor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectEventDescriptor(ReflectEventDescriptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectEventDescriptor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectEventDescriptor(ReflectEventDescriptor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ReflectEventDescriptor()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ReflectEventDescriptor, 0x90>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ReflectEventDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ReflectEventDescriptor*, "System.ComponentModel", "ReflectEventDescriptor");
