// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUIStyle
  class GUIStyle;
  // Forward declaring type: EventType
  struct EventType;
  // Forward declaring type: Event
  class Event;
  // Forward declaring type: SliderState
  class SliderState;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.SliderHandler
  // [TokenAttribute] Offset: FFFFFFFF
  struct SliderHandler/*, public System::ValueType*/ {
    public:
    // private readonly UnityEngine.Rect position
    // Size: 0x10
    // Offset: 0x0
    UnityEngine::Rect position;
    // Field size check
    static_assert(sizeof(UnityEngine::Rect) == 0x10);
    // private readonly System.Single currentValue
    // Size: 0x4
    // Offset: 0x10
    float currentValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single size
    // Size: 0x4
    // Offset: 0x14
    float size;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single start
    // Size: 0x4
    // Offset: 0x18
    float start;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single end
    // Size: 0x4
    // Offset: 0x1C
    float end;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly UnityEngine.GUIStyle slider
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::GUIStyle* slider;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // private readonly UnityEngine.GUIStyle thumb
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::GUIStyle* thumb;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // private readonly UnityEngine.GUIStyle thumbExtent
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::GUIStyle* thumbExtent;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // private readonly System.Boolean horiz
    // Size: 0x1
    // Offset: 0x38
    bool horiz;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: horiz and: id
    char __padding8[0x3] = {};
    // private readonly System.Int32 id
    // Size: 0x4
    // Offset: 0x3C
    int id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SliderHandler
    constexpr SliderHandler(UnityEngine::Rect position_ = {}, float currentValue_ = {}, float size_ = {}, float start_ = {}, float end_ = {}, UnityEngine::GUIStyle* slider_ = {}, UnityEngine::GUIStyle* thumb_ = {}, UnityEngine::GUIStyle* thumbExtent_ = {}, bool horiz_ = {}, int id_ = {}) noexcept : position{position_}, currentValue{currentValue_}, size{size_}, start{start_}, end{end_}, slider{slider_}, thumb{thumb_}, thumbExtent{thumbExtent_}, horiz{horiz_}, id{id_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: private readonly UnityEngine.Rect position
    UnityEngine::Rect& dyn_position();
    // Get instance field reference: private readonly System.Single currentValue
    float& dyn_currentValue();
    // Get instance field reference: private readonly System.Single size
    float& dyn_size();
    // Get instance field reference: private readonly System.Single start
    float& dyn_start();
    // Get instance field reference: private readonly System.Single end
    float& dyn_end();
    // Get instance field reference: private readonly UnityEngine.GUIStyle slider
    UnityEngine::GUIStyle*& dyn_slider();
    // Get instance field reference: private readonly UnityEngine.GUIStyle thumb
    UnityEngine::GUIStyle*& dyn_thumb();
    // Get instance field reference: private readonly UnityEngine.GUIStyle thumbExtent
    UnityEngine::GUIStyle*& dyn_thumbExtent();
    // Get instance field reference: private readonly System.Boolean horiz
    bool& dyn_horiz();
    // Get instance field reference: private readonly System.Int32 id
    int& dyn_id();
    // public System.Void .ctor(UnityEngine.Rect position, System.Single currentValue, System.Single size, System.Single start, System.Single end, UnityEngine.GUIStyle slider, UnityEngine.GUIStyle thumb, System.Boolean horiz, System.Int32 id, UnityEngine.GUIStyle thumbExtent)
    // Offset: 0x1B28190
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    SliderHandler(UnityEngine::Rect position, float currentValue, float size, float start, float end, UnityEngine::GUIStyle* slider, UnityEngine::GUIStyle* thumb, bool horiz, int id, UnityEngine::GUIStyle* thumbExtent) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::SliderHandler::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(position), ::il2cpp_utils::ExtractType(currentValue), ::il2cpp_utils::ExtractType(size), ::il2cpp_utils::ExtractType(start), ::il2cpp_utils::ExtractType(end), ::il2cpp_utils::ExtractType(slider), ::il2cpp_utils::ExtractType(thumb), ::il2cpp_utils::ExtractType(horiz), ::il2cpp_utils::ExtractType(id), ::il2cpp_utils::ExtractType(thumbExtent)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, position, currentValue, size, start, end, slider, thumb, horiz, id, thumbExtent);
    }
    // public System.Single Handle()
    // Offset: 0x1B281B8
    float Handle();
    // private System.Single OnMouseDown()
    // Offset: 0x1B38340
    float OnMouseDown();
    // private System.Single OnMouseDrag()
    // Offset: 0x1B38860
    float OnMouseDrag();
    // private System.Single OnMouseUp()
    // Offset: 0x1B389C0
    float OnMouseUp();
    // private System.Single OnRepaint()
    // Offset: 0x1B38A7C
    float OnRepaint();
    // private UnityEngine.EventType CurrentEventType()
    // Offset: 0x1B382B0
    UnityEngine::EventType CurrentEventType();
    // private System.Int32 CurrentScrollTroughSide()
    // Offset: 0x1B392B0
    int CurrentScrollTroughSide();
    // private System.Boolean IsEmptySlider()
    // Offset: 0x1B390F8
    bool IsEmptySlider();
    // private System.Boolean SupportsPageMovements()
    // Offset: 0x1B3915C
    bool SupportsPageMovements();
    // private System.Single PageMovementValue()
    // Offset: 0x1B39370
    float PageMovementValue();
    // private System.Single PageUpMovementBound()
    // Offset: 0x1B39784
    float PageUpMovementBound();
    // private UnityEngine.Event CurrentEvent()
    // Offset: 0x1B390A4
    UnityEngine::Event* CurrentEvent();
    // private System.Single ValueForCurrentMousePosition()
    // Offset: 0x1B393EC
    float ValueForCurrentMousePosition();
    // private System.Single Clamp(System.Single value)
    // Offset: 0x1B39478
    float Clamp(float value);
    // private UnityEngine.Rect ThumbSelectionRect()
    // Offset: 0x1B390F4
    UnityEngine::Rect ThumbSelectionRect();
    // private System.Void StartDraggingWithValue(System.Single dragStartValue)
    // Offset: 0x1B39110
    void StartDraggingWithValue(float dragStartValue);
    // private UnityEngine.SliderState SliderState()
    // Offset: 0x1B391F4
    UnityEngine::SliderState* SliderState();
    // private UnityEngine.Rect ThumbExtRect()
    // Offset: 0x1B39684
    UnityEngine::Rect ThumbExtRect();
    // private UnityEngine.Rect ThumbRect()
    // Offset: 0x1B39774
    UnityEngine::Rect ThumbRect();
    // private UnityEngine.Rect VerticalThumbRect()
    // Offset: 0x1B39908
    UnityEngine::Rect VerticalThumbRect();
    // private UnityEngine.Rect HorizontalThumbRect()
    // Offset: 0x1B39AE4
    UnityEngine::Rect HorizontalThumbRect();
    // private System.Single ClampedCurrentValue()
    // Offset: 0x1B39108
    float ClampedCurrentValue();
    // private System.Single MousePosition()
    // Offset: 0x1B39514
    float MousePosition();
    // private System.Single ValuesPerPixel()
    // Offset: 0x1B395D4
    float ValuesPerPixel();
    // private System.Single ThumbSize()
    // Offset: 0x1B39CD4
    float ThumbSize();
    // private System.Single MaxValue()
    // Offset: 0x1B39884
    float MaxValue();
    // private System.Single MinValue()
    // Offset: 0x1B3980C
    float MinValue();
  }; // UnityEngine.SliderHandler
  #pragma pack(pop)
  static check_size<sizeof(SliderHandler), 60 + sizeof(int)> __UnityEngine_SliderHandlerSizeCheck;
  static_assert(sizeof(SliderHandler) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SliderHandler, "UnityEngine", "SliderHandler");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SliderHandler::SliderHandler
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::SliderHandler::Handle
// Il2CppName: Handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::SliderHandler::*)()>(&UnityEngine::SliderHandler::Handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SliderHandler), "Handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SliderHandler::OnMouseDown
// Il2CppName: OnMouseDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::SliderHandler::*)()>(&UnityEngine::SliderHandler::OnMouseDown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SliderHandler), "OnMouseDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SliderHandler::OnMouseDrag
// Il2CppName: OnMouseDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::SliderHandler::*)()>(&UnityEngine::SliderHandler::OnMouseDrag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SliderHandler), "OnMouseDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SliderHandler::OnMouseUp
// Il2CppName: OnMouseUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::SliderHandler::*)()>(&UnityEngine::SliderHandler::OnMouseUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SliderHandler), "OnMouseUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SliderHandler::OnRepaint
// Il2CppName: OnRepaint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::SliderHandler::*)()>(&UnityEngine::SliderHandler::OnRepaint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SliderHandler), "OnRepaint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SliderHandler::CurrentEventType
// Il2CppName: CurrentEventType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::EventType (UnityEngine::SliderHandler::*)()>(&UnityEngine::SliderHandler::CurrentEventType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SliderHandler), "CurrentEventType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SliderHandler::CurrentScrollTroughSide
// Il2CppName: CurrentScrollTroughSide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::SliderHandler::*)()>(&UnityEngine::SliderHandler::CurrentScrollTroughSide)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SliderHandler), "CurrentScrollTroughSide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SliderHandler::IsEmptySlider
// Il2CppName: IsEmptySlider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::SliderHandler::*)()>(&UnityEngine::SliderHandler::IsEmptySlider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SliderHandler), "IsEmptySlider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SliderHandler::SupportsPageMovements
// Il2CppName: SupportsPageMovements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::SliderHandler::*)()>(&UnityEngine::SliderHandler::SupportsPageMovements)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SliderHandler), "SupportsPageMovements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SliderHandler::PageMovementValue
// Il2CppName: PageMovementValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::SliderHandler::*)()>(&UnityEngine::SliderHandler::PageMovementValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SliderHandler), "PageMovementValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SliderHandler::PageUpMovementBound
// Il2CppName: PageUpMovementBound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::SliderHandler::*)()>(&UnityEngine::SliderHandler::PageUpMovementBound)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SliderHandler), "PageUpMovementBound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SliderHandler::CurrentEvent
// Il2CppName: CurrentEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Event* (UnityEngine::SliderHandler::*)()>(&UnityEngine::SliderHandler::CurrentEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SliderHandler), "CurrentEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SliderHandler::ValueForCurrentMousePosition
// Il2CppName: ValueForCurrentMousePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::SliderHandler::*)()>(&UnityEngine::SliderHandler::ValueForCurrentMousePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SliderHandler), "ValueForCurrentMousePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SliderHandler::Clamp
// Il2CppName: Clamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::SliderHandler::*)(float)>(&UnityEngine::SliderHandler::Clamp)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SliderHandler), "Clamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SliderHandler::ThumbSelectionRect
// Il2CppName: ThumbSelectionRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (UnityEngine::SliderHandler::*)()>(&UnityEngine::SliderHandler::ThumbSelectionRect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SliderHandler), "ThumbSelectionRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SliderHandler::StartDraggingWithValue
// Il2CppName: StartDraggingWithValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SliderHandler::*)(float)>(&UnityEngine::SliderHandler::StartDraggingWithValue)> {
  static const MethodInfo* get() {
    static auto* dragStartValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SliderHandler), "StartDraggingWithValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dragStartValue});
  }
};
// Writing MetadataGetter for method: UnityEngine::SliderHandler::SliderState
// Il2CppName: SliderState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::SliderState* (UnityEngine::SliderHandler::*)()>(&UnityEngine::SliderHandler::SliderState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SliderHandler), "SliderState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SliderHandler::ThumbExtRect
// Il2CppName: ThumbExtRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (UnityEngine::SliderHandler::*)()>(&UnityEngine::SliderHandler::ThumbExtRect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SliderHandler), "ThumbExtRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SliderHandler::ThumbRect
// Il2CppName: ThumbRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (UnityEngine::SliderHandler::*)()>(&UnityEngine::SliderHandler::ThumbRect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SliderHandler), "ThumbRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SliderHandler::VerticalThumbRect
// Il2CppName: VerticalThumbRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (UnityEngine::SliderHandler::*)()>(&UnityEngine::SliderHandler::VerticalThumbRect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SliderHandler), "VerticalThumbRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SliderHandler::HorizontalThumbRect
// Il2CppName: HorizontalThumbRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (UnityEngine::SliderHandler::*)()>(&UnityEngine::SliderHandler::HorizontalThumbRect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SliderHandler), "HorizontalThumbRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SliderHandler::ClampedCurrentValue
// Il2CppName: ClampedCurrentValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::SliderHandler::*)()>(&UnityEngine::SliderHandler::ClampedCurrentValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SliderHandler), "ClampedCurrentValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SliderHandler::MousePosition
// Il2CppName: MousePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::SliderHandler::*)()>(&UnityEngine::SliderHandler::MousePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SliderHandler), "MousePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SliderHandler::ValuesPerPixel
// Il2CppName: ValuesPerPixel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::SliderHandler::*)()>(&UnityEngine::SliderHandler::ValuesPerPixel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SliderHandler), "ValuesPerPixel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SliderHandler::ThumbSize
// Il2CppName: ThumbSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::SliderHandler::*)()>(&UnityEngine::SliderHandler::ThumbSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SliderHandler), "ThumbSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SliderHandler::MaxValue
// Il2CppName: MaxValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::SliderHandler::*)()>(&UnityEngine::SliderHandler::MaxValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SliderHandler), "MaxValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SliderHandler::MinValue
// Il2CppName: MinValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::SliderHandler::*)()>(&UnityEngine::SliderHandler::MinValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SliderHandler), "MinValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
